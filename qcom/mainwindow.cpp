#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dataplot.h"
#include "steeringwhile.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    timer = new QTimer(this);
    sendTimer = new QTimer(this);


    //Serial port examples
    mSerialPort = new QSerialPort;
    mSerialPortInfo = new QSerialPortInfo;
    
    //Connect slots and signals
    connect(mSerialPort, SIGNAL(readyRead()), this, SLOT(readMyCom()));
    connect(ui->textBrowser, SIGNAL(textChanged()), this, SLOT(on_textBrowserRefresh()));
    connect(timer, SIGNAL(timeout()), this, SLOT(on_pushButton_clear_clicked()));
    connect(sendTimer, SIGNAL(timeout()), this, SLOT(autoSendData()));

    //set ui start
    setUI();
    timer->start(50000);
}

void MainWindow::setUI()
{
    //ui start action
    ui->pushButton_closeSerialport->setDisabled(true);
    ui->pushButton_send->setDisabled(true);
    ui->pushButton_clear->setDisabled(true);
    //set ComboBox
    QStringList baudRateList = QStringList() << "1200" << "2400" << "4800" << "9600"
                                             << "14400" << "19200" << "38400" << "43000"
                                             << "57600" << "76800" << "115200" << "128000"
                                             << "230400" << "256000" <<"460800" << "921600";
    QStringList parityList = QStringList() << "None" << "Odd" << "Even";
    QStringList stopBitsList = QStringList() << "1" << "1.5" << "2";
    QStringList dataBitsList = QStringList() << "8" << "7" << "6" << "5";
    QStringList dataFormatList = QStringList() << "ASCII" << "Decimal" << "Hex";

    ui->comboBox_baudRate->addItems(baudRateList);
    ui->comboBox_baudRate->setCurrentIndex(10);

    ui->comboBox_parity->addItems(parityList);
    ui->comboBox_stopBit->addItems(stopBitsList);
    ui->comboBox_dataBit->addItems(dataBitsList);

    ui->comboBox_format->addItems(dataFormatList);
    ui->comboBox_format->setCurrentIndex(2);
    ui->spinBox_sendTimems->setRange(1, 1000);
    ui->spinBox_sendTimems->setValue(100);

    //display portname
    QList<QSerialPortInfo> comInfoList = mSerialPortInfo->availablePorts();//get available ports list
    if(comInfoList.isEmpty())
    {
        QMessageBox::warning(this, "Warning!", "There is no available COM to use, please check your serialport!");

    }
    else
    {
        for(int i = 0; i < comInfoList.size(); i++)
        {
            ui->comboBox_portName->addItem(comInfoList[i].portName());
        }
    }

    //plot
    plot = new DataPlot(ui->qwtPlot);
    plot->resize(730, 390);
    //plot->move(-5, 0);
    QTextCursor text_cursor(ui->textBrowser->textCursor());
    text_cursor.movePosition(QTextCursor::End);

}

MainWindow::~MainWindow()
{
    mSerialPort->close();
    delete ui;
}

//void MainWindow::initPlot()
//{
//    ui->qwtPlot->setTitle("sin wave");
//    ui->qwtPlot->setCanvasBackground(QColor(Qt::white));

//    ui->qwtPlot->setAutoReplot(false);

//    //axis
//    ui->qwtPlot->setAxisTitle(QwtPlot::xBottom, "X Axis");
//    ui->qwtPlot->setAxisTitle(QwtPlot::yLeft, "Y Axis");

//    this->curve = new QwtPlotCurve("y = sin(x)");

//    this->curve->attach(ui->qwtPlot);

//    this->xvalue = new QVector<qreal>();
//    this->xvalue = new QVector<qreal>();
//}

//void MainWindow::update()
//{
//    (*this->currentValue) += 0.1;

//    this->xvalue->append(*this->currentValue);
//    this->yvalue->append(qSin(*this->currentValue));

//    this->curve->setSamples(*this->xvalue, *this->yvalue);

//    qDebug() << *this ->currentValue;

//    ui->qwtPlot->replot();
//}

void MainWindow::readMyCom()
{
    data_received = mSerialPort->readAll();
    QString data2Send;

    if(!data_received.isEmpty())
    {
        int n = ui->comboBox_format->currentIndex();
        switch(n)
        {
        case 0: data2Send = data_received; break;
        case 1: {
            for(int countSend = 0; countSend < data_received.count(); countSend ++)
            {
                QString sendBuff;
                sendBuff.sprintf("%02d ", (unsigned char)data_received.at(countSend));
                data2Send += sendBuff;
            }
            break;
        }
        case 2: {
            for(int countSend = 0; countSend < data_received.count(); countSend ++)
            {
                QString sendBuff;
                sendBuff.sprintf("%02x ", (unsigned char)data_received.at(countSend));
                data2Send += sendBuff;
            }
            break;

            }
        default: break;
        }
    }

    if((unsigned char)data_received.at(0) == 0x22 || countData )
    {
        dataCheck[countData] = (unsigned char)data_received.at(0);

        if(countData > 16)
        {
            if(dataCheck[countData] == 0xdd)
            {
                dataInterpret();
            }
            else
            {
                countData = 0;
            }
        }
        countData ++;
    }

    if(!data_received.isEmpty())
    ui->textBrowser->insertPlainText(data2Send);

}

void MainWindow::dataInterpret()
{
//    int engineSpeed = (dataCheck[1] + dataCheck[2]) / 4;
    int engineSpeed = (dataCheck[1] + dataCheck[2]) / 4;
    int vehicleSpeed = dataCheck[3];
    int accelerateRate = dataCheck[4];
    int loadRate = dataCheck[5];
    int XAccelerate = ((dataCheck[7] << 8) | dataCheck[6]) /200 ;
            /*ax =((AxH<<8)|AxL)/32768*16g(g is Acceleration of gravity, it can be 9.8m/s 2 )*/
    int YAccelerate = ((dataCheck[9] << 8) | dataCheck[8]) /200 ;
    int XAngularSpeed = ((dataCheck[11] << 8) | dataCheck[10]);//°/s
    int YAngularSpeed = ((dataCheck[13] << 8) | dataCheck[12]);//°/s
    int ZAngularSpeed = ((dataCheck[15] << 8) | dataCheck[14]) ;//°/s

    ui->lcdEngineSpeed->display(engineSpeed);
    if(ui->checkBox->isChecked())
    {
        qwtShowLine(engineSpeed, 0);
        plot->setLineVisible(0, 1);
    }
    else
    {
        plot->setLineVisible(0, 0);
    }

    ui->lcdVehicleSpeed->display(vehicleSpeed);
    if(ui->checkBox_2->isChecked())
    {
        qwtShowLine(vehicleSpeed, 1);
        plot->setLineVisible(1, 1);
    }
    else
    {
        plot->setLineVisible(1, 0);
    }


    ui->lcdAccelerate->display(accelerateRate);
    if(ui->checkBox_3->isChecked())
    {
        qwtShowLine(accelerateRate, 2);
        plot->setLineVisible(2, 1);
    }
    else
    {
        plot->setLineVisible(2, 0);
    }
    ui->lcdLoadRate->display(loadRate);
    if(ui->checkBox_4->isChecked())
    {
        qwtShowLine(loadRate, 3);
        plot->setLineVisible(3, 1);
    }
    else
    {
        plot->setLineVisible(3, 0);
    }

    ui->lcdXacceleration->display(XAccelerate);
    if(ui->checkBox_5->isChecked())
    {
        qwtShowLine(XAccelerate, 4);
        plot->setLineVisible(4, 1);
    }
    else
    {
        plot->setLineVisible(4, 0);
    }

    ui->lcdYacceleration->display(YAccelerate);
    if(ui->checkBox_6->isChecked())
    {
        qwtShowLine(YAccelerate, 5);
        plot->setLineVisible(5, 1);
    }
    else
    {
        plot->setLineVisible(5, 0);
    }

    ui->lcdXangularSpeed->display(XAngularSpeed);
    if(ui->checkBox_7->isChecked())
    {
        qwtShowLine(XAngularSpeed, 6);
        plot->setLineVisible(6, 1);
    }
    else
    {
        plot->setLineVisible(6, 0);
    }

    ui->lcdYangularSpeed->display(YAngularSpeed);
    if(ui->checkBox_8->isChecked())
    {
        qwtShowLine(YAngularSpeed, 7);
        plot->setLineVisible(7, 1);
    }
    else
    {
        plot->setLineVisible(7, 0);
    }

    ui->lcdZangularSpeed->display(ZAngularSpeed);
    if(ui->checkBox_9->isChecked())
    {
        qwtShowLine(ZAngularSpeed, 8);
        plot->setLineVisible(8, 1);
    }
    else
    {
        plot->setLineVisible(8, 0);
    }

    if(ui->checkBox_sw->isChecked())
    {
        qwtShowLine(sw.getSteerAngular(vehicleSpeed, YAccelerate), 9);

        plot->setLineVisible(9, 1);
    }
    else
    {
        plot->setLineVisible(9, 0);
    }

    if(ui->checkBox_gs->isChecked())
    {
        qwtShowLine(g.getGear(engineSpeed, vehicleSpeed), 10);


        plot->setLineVisible(10, 1);
    }
    else
    {
        plot->setLineVisible(10, 0);
    }


    //plot
//    QDateTime currentTime = QDateTime::currentDateTime();

//    for (int i = 0; i < 9; i++) {
//        val0[i] = dataCheck[i];
//        time0[i] += countData;
//    }

//    val0[9] = qrand()%10;
//    curve0->setSamples(time0, val0, 10);
//    ui->qwtPlot->replot();
}

void MainWindow::qwtShowLine(int val, int line)
{
    //set range
    if(val > plot->getMaxYAxisValue(1))
    {
        plot->setMaxYAxisValue(val + 10, 1);
    }
    if(val < plot->getMaxYAxisValue(2))
    {
        plot->setMaxYAxisValue(val - 10, 2);
    }

    //display
    plot->upPlotData((double)val, line);
}

void MainWindow::on_textBrowserRefresh()
{
    ui->textBrowser->moveCursor(QTextCursor::End);
}


void MainWindow::on_pushButton_open_clicked()
{
//    this->timer->start(10);
    try
    {
        mSerialPort->setPortName(ui->comboBox_portName->currentText());//set port name
        mSerialPort->open(QIODevice::ReadWrite);//open the port
        mSerialPort->setBaudRate(ui->comboBox_baudRate->currentText().toInt());//set baudrate

        QString currentData = " ";//save data to send
        currentData = ui->comboBox_dataBit->currentText();//read current textedit message

        //set databits
        switch (currentData.toInt()) {
        case 8: mSerialPort->setDataBits(QSerialPort::Data8); break;
        case 7: mSerialPort->setDataBits(QSerialPort::Data7); break;
        case 6: mSerialPort->setDataBits(QSerialPort::Data6); break;
        case 5: mSerialPort->setDataBits(QSerialPort::Data5); break;
        default:
            break;
        }

        //set stopbits
        mSerialPort->setFlowControl(QSerialPort::NoFlowControl);
        currentData = ui->comboBox_stopBit->currentText();
        int n = ui->comboBox_stopBit->currentIndex();

        switch (n)
        {
        case 0: mSerialPort->setStopBits(QSerialPort::OneStop); break;
        case 1: mSerialPort->setStopBits(QSerialPort::OneAndHalfStop); break;
        case 2: mSerialPort->setStopBits(QSerialPort::TwoStop); break;
        default:
            break;
        }

        //set parity
        int m = ui->comboBox_parity->currentIndex();

        switch(m)
        {
        case 0: mSerialPort->setParity(QSerialPort::NoParity); break;
        case 1: mSerialPort->setParity(QSerialPort::EvenParity); break;
        case 2: mSerialPort->setParity(QSerialPort::OddParity); break;
        default:
            break;
        }

        //enable button
        ui->pushButton_closeSerialport->setDisabled(false);
        ui->pushButton_clear->setDisabled(false);
        ui->pushButton_send->setDisabled(false);

        //disable button
        ui->comboBox_baudRate->setDisabled(true);
        ui->comboBox_dataBit->setDisabled(true);
        ui->comboBox_stopBit->setDisabled(true);
        ui->comboBox_portName->setDisabled(true);
        ui->comboBox_parity->setDisabled(true);
    }

    catch(...)
    {
        QMessageBox::warning(this, "ERROR!", "Can not open the serialport!");
    }
}

void MainWindow::on_pushButton_closeSerialport_clicked()
{
    mSerialPort->close();

    //disable button
    ui->pushButton_closeSerialport->setDisabled(true);
    //ui->pushButton_clear->setDisabled(true);
    ui->pushButton_send->setDisabled(true);

    //enable button
    ui->comboBox_baudRate->setDisabled(false);
    ui->comboBox_dataBit->setDisabled(false);
    ui->comboBox_stopBit->setDisabled(false);
    ui->comboBox_portName->setDisabled(false);
    ui->comboBox_parity->setDisabled(false);
}

void MainWindow::on_pushButton_send_clicked()
{
    sendMessage();
}

void MainWindow::autoSendData()
{
    if(ui->spinBox_sendTimems->isEnabled())
    {
        sendMessage();
    }
}

void MainWindow::sendMessage()
{
    mSerialPort->write(ui->lineEdit_send->text().toLatin1());
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->textBrowser->clear();
    plot->resetPlot();
    plot->setAxisScale(QwtPlot::xBottom, 0, 100);
    plot->replot();
}

void MainWindow::on_pushButton_closeWindow_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_send2File_clicked()
{
    QString path = "./";
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Files(*.text)"), path, tr("txt files(*.txt)"));

    if(fileName.isNull())
    {
        QMessageBox::warning(this, tr("File Name Error!"), tr("File name can not be null!"), QMessageBox::Ok);
    }
    else
    {
        QFile saveFile;
        saveFile.setFileName(fileName);

        if(saveFile.open(QIODevice::ReadWrite|QFile::Text))
        {
            QTextStream saveFileStream(&saveFile);
            saveFileStream<< ui->textBrowser->toPlainText();
            saveFileStream.atEnd();
            saveFile.close();
        }
    }
}

void MainWindow::on_checkBox_autoSend_clicked()
{
    sendTimer->start(ui->spinBox_sendTimems->value());

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("About software"), "Designed by WangYongcong, connect me: iwangyongcong@hotmail.com", QMessageBox::Ok);
}


void MainWindow::on_pushButton_2_clicked()
{
    sw.show();
}

void MainWindow::on_pushButton_3_clicked()
{
    g.show();
}
