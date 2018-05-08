/********************************************************************************
** Form generated from reading UI file 'gear.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEAR_H
#define UI_GEAR_H

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

class Ui_gear
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *oneRatio;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *twoRatio;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *threeRatio;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QDoubleSpinBox *fourRatio;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *fiveRatio;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *sixRatio;
    QPushButton *g_finish;

    void setupUi(QWidget *gear)
    {
        if (gear->objectName().isEmpty())
            gear->setObjectName(QStringLiteral("gear"));
        gear->resize(600, 180);
        gear->setMinimumSize(QSize(600, 180));
        gear->setMaximumSize(QSize(600, 180));
        verticalLayout = new QVBoxLayout(gear);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(gear);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        oneRatio = new QDoubleSpinBox(gear);
        oneRatio->setObjectName(QStringLiteral("oneRatio"));
        oneRatio->setMinimumSize(QSize(100, 0));
        oneRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        oneRatio->setDecimals(5);
        oneRatio->setMinimum(-1e+06);
        oneRatio->setMaximum(1e+06);

        horizontalLayout_3->addWidget(oneRatio);


        horizontalLayout_11->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(gear);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        twoRatio = new QDoubleSpinBox(gear);
        twoRatio->setObjectName(QStringLiteral("twoRatio"));
        twoRatio->setMinimumSize(QSize(100, 0));
        twoRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        twoRatio->setDecimals(5);
        twoRatio->setMinimum(-1e+06);
        twoRatio->setMaximum(1e+06);

        horizontalLayout_4->addWidget(twoRatio);


        horizontalLayout_11->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(gear);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        threeRatio = new QDoubleSpinBox(gear);
        threeRatio->setObjectName(QStringLiteral("threeRatio"));
        threeRatio->setMinimumSize(QSize(100, 0));
        threeRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        threeRatio->setDecimals(5);
        threeRatio->setMinimum(-1e+06);
        threeRatio->setMaximum(1e+06);

        horizontalLayout_7->addWidget(threeRatio);


        horizontalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(gear);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        fourRatio = new QDoubleSpinBox(gear);
        fourRatio->setObjectName(QStringLiteral("fourRatio"));
        fourRatio->setMinimumSize(QSize(100, 0));
        fourRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fourRatio->setDecimals(5);
        fourRatio->setMinimum(-1e+06);
        fourRatio->setMaximum(1e+06);

        horizontalLayout_8->addWidget(fourRatio);


        horizontalLayout_12->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(gear);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        fiveRatio = new QDoubleSpinBox(gear);
        fiveRatio->setObjectName(QStringLiteral("fiveRatio"));
        fiveRatio->setMinimumSize(QSize(100, 0));
        fiveRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fiveRatio->setDecimals(5);
        fiveRatio->setMinimum(-1e+06);
        fiveRatio->setMaximum(1e+06);

        horizontalLayout_5->addWidget(fiveRatio);


        horizontalLayout_13->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(gear);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        sixRatio = new QDoubleSpinBox(gear);
        sixRatio->setObjectName(QStringLiteral("sixRatio"));
        sixRatio->setMinimumSize(QSize(100, 0));
        sixRatio->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sixRatio->setDecimals(5);
        sixRatio->setMinimum(-1e+06);
        sixRatio->setMaximum(1e+06);

        horizontalLayout_6->addWidget(sixRatio);


        horizontalLayout_13->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_13);

        g_finish = new QPushButton(gear);
        g_finish->setObjectName(QStringLiteral("g_finish"));
        g_finish->setMinimumSize(QSize(0, 30));
        g_finish->setStyleSheet(QLatin1String("alternate-background-color: rgb(0, 255, 255);\n"
"gridline-color: rgb(255, 255, 0);"));

        verticalLayout->addWidget(g_finish);


        retranslateUi(gear);

        QMetaObject::connectSlotsByName(gear);
    } // setupUi

    void retranslateUi(QWidget *gear)
    {
        gear->setWindowTitle(QApplication::translate("gear", "Form", 0));
        label_3->setText(QApplication::translate("gear", "\344\270\200\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_4->setText(QApplication::translate("gear", "\344\272\214\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_7->setText(QApplication::translate("gear", "\344\270\211\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_8->setText(QApplication::translate("gear", "\345\233\233\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_5->setText(QApplication::translate("gear", "\344\272\224\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        label_6->setText(QApplication::translate("gear", "\345\205\255\346\241\243\344\274\240\345\212\250\346\257\224\357\274\232", 0));
        g_finish->setText(QApplication::translate("gear", "\350\276\223\345\205\245\345\256\214\346\210\220", 0));
    } // retranslateUi

};

namespace Ui {
    class gear: public Ui_gear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEAR_H
