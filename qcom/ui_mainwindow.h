/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_portName;
    QComboBox *comboBox_baudRate;
    QComboBox *comboBox_parity;
    QComboBox *comboBox_stopBit;
    QComboBox *comboBox_dataBit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_open;
    QPushButton *pushButton_closeSerialport;
    QPushButton *pushButton;
    QPushButton *pushButton_closeWindow;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox_format;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_send2File;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_clear;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox_autoSend;
    QSpinBox *spinBox_sendTimems;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_send;
    QPushButton *pushButton_send;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_6;
    QLCDNumber *lcdAccelerate;
    QCheckBox *checkBox_3;
    QLCDNumber *lcdXacceleration;
    QCheckBox *checkBox;
    QLCDNumber *lcdZangularSpeed;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_2;
    QLCDNumber *lcdXangularSpeed;
    QCheckBox *checkBox_8;
    QLCDNumber *lcdYangularSpeed;
    QLCDNumber *lcdVehicleSpeed;
    QCheckBox *checkBox_5;
    QLCDNumber *lcdYacceleration;
    QLCDNumber *lcdLoadRate;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_7;
    QLCDNumber *lcdEngineSpeed;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_sw;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_gs;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox_12;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_13;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBox_14;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_14;
    QFrame *line;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_16;
    QwtPlot *qwtPlot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 700));
        MainWindow->setMaximumSize(QSize(1000, 772));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/logo"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setInputMethodHints(Qt::ImhHiddenText);
        MainWindow->setIconSize(QSize(48, 48));
        MainWindow->setDockNestingEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_11 = new QVBoxLayout(centralWidget);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 270));
        groupBox->setAutoFillBackground(false);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comboBox_portName = new QComboBox(groupBox);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));

        verticalLayout_2->addWidget(comboBox_portName);

        comboBox_baudRate = new QComboBox(groupBox);
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        verticalLayout_2->addWidget(comboBox_baudRate);

        comboBox_parity = new QComboBox(groupBox);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        verticalLayout_2->addWidget(comboBox_parity);

        comboBox_stopBit = new QComboBox(groupBox);
        comboBox_stopBit->setObjectName(QStringLiteral("comboBox_stopBit"));

        verticalLayout_2->addWidget(comboBox_stopBit);

        comboBox_dataBit = new QComboBox(groupBox);
        comboBox_dataBit->setObjectName(QStringLiteral("comboBox_dataBit"));

        verticalLayout_2->addWidget(comboBox_dataBit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout_2->addWidget(pushButton_open);

        pushButton_closeSerialport = new QPushButton(groupBox);
        pushButton_closeSerialport->setObjectName(QStringLiteral("pushButton_closeSerialport"));

        horizontalLayout_2->addWidget(pushButton_closeSerialport);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(pushButton);

        pushButton_closeWindow = new QPushButton(groupBox);
        pushButton_closeWindow->setObjectName(QStringLiteral("pushButton_closeWindow"));
        pushButton_closeWindow->setMinimumSize(QSize(0, 0));
        pushButton_closeWindow->setMaximumSize(QSize(16777215, 16777215));
        pushButton_closeWindow->setIconSize(QSize(30, 30));

        verticalLayout_4->addWidget(pushButton_closeWindow);


        horizontalLayout_8->addLayout(verticalLayout_4);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        comboBox_format = new QComboBox(groupBox);
        comboBox_format->setObjectName(QStringLiteral("comboBox_format"));

        horizontalLayout_5->addWidget(comboBox_format);


        verticalLayout_6->addLayout(horizontalLayout_5);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 110));
        textBrowser->setMaximumSize(QSize(16777215, 100));
        textBrowser->setAcceptRichText(false);
        textBrowser->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_6->addWidget(textBrowser);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_send2File = new QPushButton(groupBox);
        pushButton_send2File->setObjectName(QStringLiteral("pushButton_send2File"));

        horizontalLayout_3->addWidget(pushButton_send2File);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_clear = new QPushButton(groupBox);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout_3->addWidget(pushButton_clear);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        checkBox_autoSend = new QCheckBox(groupBox);
        checkBox_autoSend->setObjectName(QStringLiteral("checkBox_autoSend"));
        checkBox_autoSend->setMaximumSize(QSize(70, 16777215));
        checkBox_autoSend->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_7->addWidget(checkBox_autoSend);

        spinBox_sendTimems = new QSpinBox(groupBox);
        spinBox_sendTimems->setObjectName(QStringLiteral("spinBox_sendTimems"));
        spinBox_sendTimems->setMinimumSize(QSize(50, 0));

        horizontalLayout_7->addWidget(spinBox_sendTimems);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_send = new QLineEdit(groupBox);
        lineEdit_send->setObjectName(QStringLiteral("lineEdit_send"));

        horizontalLayout_4->addWidget(lineEdit_send);

        pushButton_send = new QPushButton(groupBox);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout_4->addWidget(pushButton_send);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_8->addLayout(verticalLayout_3);


        horizontalLayout_8->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_10->addWidget(groupBox);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMinimumSize(QSize(0, 0));
        groupBox_4->setMaximumSize(QSize(250, 16777215));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox_6 = new QCheckBox(groupBox_4);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 0);"));

        gridLayout->addWidget(checkBox_6, 6, 0, 1, 1);

        lcdAccelerate = new QLCDNumber(groupBox_4);
        lcdAccelerate->setObjectName(QStringLiteral("lcdAccelerate"));
        lcdAccelerate->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdAccelerate, 3, 2, 1, 1);

        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 255);"));

        gridLayout->addWidget(checkBox_3, 3, 0, 1, 1);

        lcdXacceleration = new QLCDNumber(groupBox_4);
        lcdXacceleration->setObjectName(QStringLiteral("lcdXacceleration"));
        lcdXacceleration->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdXacceleration, 5, 2, 1, 1);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMaximumSize(QSize(120, 16777215));
        checkBox->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 0);"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        lcdZangularSpeed = new QLCDNumber(groupBox_4);
        lcdZangularSpeed->setObjectName(QStringLiteral("lcdZangularSpeed"));
        lcdZangularSpeed->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdZangularSpeed, 9, 2, 1, 1);

        checkBox_9 = new QCheckBox(groupBox_4);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));

        gridLayout->addWidget(checkBox_9, 9, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(checkBox_2, 2, 0, 1, 1);

        lcdXangularSpeed = new QLCDNumber(groupBox_4);
        lcdXangularSpeed->setObjectName(QStringLiteral("lcdXangularSpeed"));
        lcdXangularSpeed->setLayoutDirection(Qt::RightToLeft);
        lcdXangularSpeed->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        lcdXangularSpeed->setFrameShape(QFrame::Box);
        lcdXangularSpeed->setFrameShadow(QFrame::Raised);
        lcdXangularSpeed->setSegmentStyle(QLCDNumber::Filled);

        gridLayout->addWidget(lcdXangularSpeed, 7, 2, 1, 1);

        checkBox_8 = new QCheckBox(groupBox_4);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 255);"));

        gridLayout->addWidget(checkBox_8, 8, 0, 1, 1);

        lcdYangularSpeed = new QLCDNumber(groupBox_4);
        lcdYangularSpeed->setObjectName(QStringLiteral("lcdYangularSpeed"));
        lcdYangularSpeed->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdYangularSpeed, 8, 2, 1, 1);

        lcdVehicleSpeed = new QLCDNumber(groupBox_4);
        lcdVehicleSpeed->setObjectName(QStringLiteral("lcdVehicleSpeed"));
        lcdVehicleSpeed->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdVehicleSpeed, 2, 2, 1, 1);

        checkBox_5 = new QCheckBox(groupBox_4);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));

        gridLayout->addWidget(checkBox_5, 5, 0, 1, 1);

        lcdYacceleration = new QLCDNumber(groupBox_4);
        lcdYacceleration->setObjectName(QStringLiteral("lcdYacceleration"));
        lcdYacceleration->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdYacceleration, 6, 2, 1, 1);

        lcdLoadRate = new QLCDNumber(groupBox_4);
        lcdLoadRate->setObjectName(QStringLiteral("lcdLoadRate"));
        lcdLoadRate->setStyleSheet(QLatin1String("background-color: rgb(170, 255, 0);\n"
"background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdLoadRate, 4, 2, 1, 1);

        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));

        gridLayout->addWidget(checkBox_4, 4, 0, 1, 1);

        checkBox_7 = new QCheckBox(groupBox_4);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(checkBox_7, 7, 0, 1, 1);

        lcdEngineSpeed = new QLCDNumber(groupBox_4);
        lcdEngineSpeed->setObjectName(QStringLiteral("lcdEngineSpeed"));
        lcdEngineSpeed->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(lcdEngineSpeed, 0, 2, 1, 1);


        verticalLayout_7->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(240, 16777215));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBox_sw = new QCheckBox(groupBox_3);
        checkBox_sw->setObjectName(QStringLiteral("checkBox_sw"));
        QFont font;
        font.setPointSize(9);
        checkBox_sw->setFont(font);
        checkBox_sw->setLayoutDirection(Qt::LeftToRight);
        checkBox_sw->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        horizontalLayout_6->addWidget(checkBox_sw);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        checkBox_gs = new QCheckBox(groupBox_3);
        checkBox_gs->setObjectName(QStringLiteral("checkBox_gs"));
        checkBox_gs->setStyleSheet(QStringLiteral("background-color: rgb(255, 165, 0);"));

        horizontalLayout_10->addWidget(checkBox_gs);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_10->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        checkBox_12 = new QCheckBox(groupBox_3);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        horizontalLayout_11->addWidget(checkBox_12);

        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_11->addWidget(pushButton_4);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        checkBox_13 = new QCheckBox(groupBox_3);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        horizontalLayout_12->addWidget(checkBox_13);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_12->addWidget(pushButton_5);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        checkBox_14 = new QCheckBox(groupBox_3);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        horizontalLayout_13->addWidget(checkBox_14);

        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_13->addWidget(pushButton_6);


        verticalLayout_5->addLayout(horizontalLayout_13);


        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_15->addLayout(verticalLayout_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(line);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(720, 400));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_16 = new QHBoxLayout(groupBox_2);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        qwtPlot = new QwtPlot(groupBox_2);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));

        horizontalLayout_16->addWidget(qwtPlot);


        horizontalLayout_14->addWidget(groupBox_2);


        horizontalLayout_15->addLayout(horizontalLayout_14);


        verticalLayout_10->addLayout(horizontalLayout_15);


        verticalLayout_11->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DC_COM", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\232\350\256\257", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\253\257\345\217\243\357\274\232</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\263\242\347\211\271\347\216\207\357\274\232</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\240\241\351\252\214\344\275\215\357\274\232</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\201\234\346\255\242\344\275\215\357\274\232</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\344\275\215\357\274\232</span></p></body></html>", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        pushButton_closeSerialport->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        pushButton_closeWindow->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\346\216\245\346\224\266\357\274\232</span></p></body></html>", 0));
        pushButton_send2File->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272\345\237\237", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232</span></p></body></html>", 0));
        checkBox_autoSend->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266(ms)\357\274\232", 0));
        lineEdit_send->setPlaceholderText(QApplication::translate("MainWindow", "Write data to send", 0));
        pushButton_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\241\214\350\275\246\346\225\260\346\215\256", 0));
        checkBox_6->setText(QApplication::translate("MainWindow", "y\345\212\240\351\200\237\345\272\246(m/s^2)\357\274\232", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "\350\212\202\346\260\224\351\227\250\345\274\200\345\272\246(%)\357\274\232", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\350\275\254\351\200\237(r/s)\357\274\232", 0));
        checkBox_9->setText(QApplication::translate("MainWindow", "z\350\247\222\351\200\237\345\272\246(rad/s)\357\274\232", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\350\275\246\351\200\237(km/h)\357\274\232", 0));
        checkBox_8->setText(QApplication::translate("MainWindow", "y\350\247\222\351\200\237\345\272\246(rad/s)\357\274\232", 0));
        checkBox_5->setText(QApplication::translate("MainWindow", "x\345\212\240\351\200\237\345\272\246(m/s^2)\357\274\232", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "\350\264\237\350\215\267\347\216\207(%)\357\274\232", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "x\350\247\222\351\200\237\345\272\246(rad/s)\357\274\232", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\210\206\346\236\220\346\225\260\346\215\256", 0));
        checkBox_sw->setText(QApplication::translate("MainWindow", "\346\226\271\345\220\221\347\233\230\350\275\254\350\247\222\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", 0));
        checkBox_gs->setText(QApplication::translate("MainWindow", "\346\241\243\344\275\215\346\225\260\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", 0));
        checkBox_12->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", 0));
        checkBox_13->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", 0));
        checkBox_14->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\217\202\346\225\260", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\263\242\345\275\242\346\230\276\347\244\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
