#ifndef GEAR_H
#define GEAR_H

#include <QWidget>

namespace Ui {
class gear;
}

class gear : public QWidget
{
    Q_OBJECT

public:
    explicit gear(QWidget *parent = 0);
    ~gear();

    int getGear(int engineSpeed, int vehicleSpeed);

private slots:
    void on_g_finish_clicked();


private:
    Ui::gear *ui;

    double Ratio[6];


};

#endif // GEAR_H
