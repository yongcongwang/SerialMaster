#include "gear.h"
#include "ui_gear.h"
#include <math.h>
gear::gear(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gear)
{
    ui->setupUi(this);
}

gear::~gear()
{
    delete ui;
}

int gear::getGear(int engineSpeed, int vehicleSpeed)
{
    double i = (double) vehicleSpeed / (double)engineSpeed;
    double buff = qAbs(Ratio[0] - i);
    unsigned int gears = 0;
    for (unsigned int count = 1; count < 6; count++)
    {
        if(qAbs(Ratio[count] - i) < buff)
        {
            buff = qAbs(Ratio[count] - i);
            gears = count;
        }
    }

    return gears + 1;
}

void gear::on_g_finish_clicked()
{
    Ratio[0] = ui->oneRatio->value();
    Ratio[1] = ui->twoRatio->value();
    Ratio[2] = ui->threeRatio->value();
    Ratio[3] = ui->fourRatio->value();
    Ratio[4] = ui->fiveRatio->value();
    Ratio[5] = ui->sixRatio->value();

    this->close();
}
