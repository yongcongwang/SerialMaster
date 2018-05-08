#include "steeringwhile.h"
#include "ui_steeringwhile.h"
#include <math.h>

steeringWhile::steeringWhile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::steeringWhile)
{
    ui->setupUi(this);
}

steeringWhile::~steeringWhile()
{
    delete ui;
}

int steeringWhile::getSteerAngular(int u, int ay)
{
    double a = ((frontWheelBase + rearWheelBase) * ay) / (u * u);
    return (atan(a) * driveRatio / 3.14 * 180);
}


void steeringWhile::on_sw_finish_clicked()
{

    driveRatio = ui->driveRatio->value();
    frontWheelBase = ui->fWheelBase->value();
    rearWheelBase = ui->rWheelBase->value();


    this->close();
}
