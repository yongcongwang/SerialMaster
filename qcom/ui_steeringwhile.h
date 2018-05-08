/********************************************************************************
** Form generated from reading UI file 'steeringwhile.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEERINGWHILE_H
#define UI_STEERINGWHILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_steeringWhile
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *fWheelBase;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *rWheelBase;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *driveRatio;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QDoubleSpinBox *collectionTime;
    QPushButton *sw_finish;

    void setupUi(QWidget *steeringWhile)
    {
        if (steeringWhile->objectName().isEmpty())
            steeringWhile->setObjectName(QStringLiteral("steeringWhile"));
        steeringWhile->resize(600, 180);
        steeringWhile->setMinimumSize(QSize(600, 180));
        steeringWhile->setMaximumSize(QSize(600, 180));
        verticalLayout = new QVBoxLayout(steeringWhile);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(steeringWhile);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        fWheelBase = new QDoubleSpinBox(steeringWhile);
        fWheelBase->setObjectName(QStringLiteral("fWheelBase"));
        fWheelBase->setMinimumSize(QSize(100, 0));
        fWheelBase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fWheelBase->setDecimals(5);
        fWheelBase->setMinimum(-1e+06);
        fWheelBase->setMaximum(1e+06);

        horizontalLayout_3->addWidget(fWheelBase);


        horizontalLayout_11->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(steeringWhile);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        rWheelBase = new QDoubleSpinBox(steeringWhile);
        rWheelBase->setObjectName(QStringLiteral("rWheelBase"));
        rWheelBase->setMinimumSize(QSize(100, 0));
        rWheelBase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rWheelBase->setDecimals(5);
        rWheelBase->setMinimum(-1e+06);
        rWheelBase->setMaximum(1e+06);

        horizontalLayout_4->addWidget(rWheelBase);


        horizontalLayout_11->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(steeringWhile);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        driveRatio = new QDoubleSpinBox(steeringWhile);
        driveRatio->setObjectName(QStringLiteral("driveRatio"));
        driveRatio->setMinimumSize(QSize(100, 0));
        driveRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        driveRatio->setDecimals(5);
        driveRatio->setMinimum(-1e+06);
        driveRatio->setMaximum(1e+06);

        horizontalLayout_7->addWidget(driveRatio);


        horizontalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(steeringWhile);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        collectionTime = new QDoubleSpinBox(steeringWhile);
        collectionTime->setObjectName(QStringLiteral("collectionTime"));
        collectionTime->setMinimumSize(QSize(100, 0));
        collectionTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        collectionTime->setDecimals(5);
        collectionTime->setMinimum(-1e+06);
        collectionTime->setMaximum(1e+06);

        horizontalLayout_8->addWidget(collectionTime);


        horizontalLayout_12->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_12);

        sw_finish = new QPushButton(steeringWhile);
        sw_finish->setObjectName(QStringLiteral("sw_finish"));
        sw_finish->setMinimumSize(QSize(0, 30));
        sw_finish->setStyleSheet(QLatin1String("alternate-background-color: rgb(0, 255, 255);\n"
"gridline-color: rgb(255, 255, 0);"));

        verticalLayout->addWidget(sw_finish);


        retranslateUi(steeringWhile);

        QMetaObject::connectSlotsByName(steeringWhile);
    } // setupUi

    void retranslateUi(QWidget *steeringWhile)
    {
        steeringWhile->setWindowTitle(QApplication::translate("steeringWhile", "\346\226\271\345\220\221\347\233\230\350\275\254\350\247\222\345\217\202\346\225\260\350\256\276\345\256\232", 0));
        label_3->setText(QApplication::translate("steeringWhile", "\345\211\215\350\275\264\350\267\235(m)\357\274\232", 0));
        label_4->setText(QApplication::translate("steeringWhile", "\345\220\216\350\275\264\350\267\235(m)\357\274\232", 0));
        label_7->setText(QApplication::translate("steeringWhile", "\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_8->setText(QApplication::translate("steeringWhile", "\351\207\207\351\233\206\346\227\266\351\227\264\357\274\232", 0));
        sw_finish->setText(QApplication::translate("steeringWhile", "\350\276\223\345\205\245\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class steeringWhile: public Ui_steeringWhile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEERINGWHILE_H
