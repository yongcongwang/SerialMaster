#ifndef STEERINGWHILE_H
#define STEERINGWHILE_H

#include <QWidget>

namespace Ui {
class steeringWhile;
}

class steeringWhile : public QWidget
{
    Q_OBJECT

public:
    explicit steeringWhile(QWidget *parent = 0);
    ~steeringWhile();

    int getSteerAngular(int, int);

private slots:

    void on_sw_finish_clicked();

private:
    Ui::steeringWhile *ui;

    double driveRatio;
    double frontWheelBase;
    double rearWheelBase;

};

#endif // STEERINGWHILE_H
