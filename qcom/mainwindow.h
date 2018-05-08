#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QTextCodec>
#include <QtCore>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <QVector>
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QFileDialog>
#include <qwt_legend.h>
#include "steeringwhile.h"
#include "gear.h"

#define TIME_OUT 10
#define OBO_TIMER_INTERVAL 100

namespace Ui {
class MainWindow;
}
class DataPlot;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    QByteArray data_received;
    QByteArray data_send;
    unsigned char countData = 0;
    int dataCheck[40];

    void qwtShowLine(int, int);

    double time0[10];
    double val0[10];
    double time1[10];
    double val1[10];
    QwtPlotCurve *curve0;
    QwtPlotCurve *curve1;

    QwtLegend *legend;

    void setUI();
    void sendMessage();
    void dataInterpret();

    
private slots:
    void readMyCom();
//    void realtimeDataSlot();
//    void update();
    void autoSendData();

    void on_textBrowserRefresh();

    void on_pushButton_open_clicked();

    void on_pushButton_closeSerialport_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_closeWindow_clicked();

    void on_pushButton_send2File_clicked();

    void on_checkBox_autoSend_clicked();

    void on_pushButton_clicked();

//    void on_pushButton_2_clicked();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *mSerialPort;
    QSerialPortInfo *mSerialPortInfo;

    DataPlot *plot;
    QTimer *timer;
    QTimer *sendTimer;
//    qreal *currentValue;
//    QwtPlotCurve *curve;
//    QVector<qreal> *xvalue;
//    QVector<qreal> *yvalue;

    steeringWhile sw;
    gear g;

    void initPlot();
    
};

#endif // MAINWINDOW_H
