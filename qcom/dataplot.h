#ifndef DATAPLOT
#define DATAPLOT

#include <qwt_picker_machine.h>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_picker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_grid.h>
#include <stdlib.h>
#include <qwt_painter.h>
#include <qwt_plot_marker.h>
#include <qwt_scale_widget.h>
#include <qwt_legend.h>
#include <qwt_scale_draw.h>
#include <qwt_math.h>
#include <qwt_Plot_zoomer.h>

const int PLOT_SIZE = 10000;//X length

class QwtPlotPicker;
class DataPlot : public QwtPlot
{
    Q_OBJECT

public:
    DataPlot(QWidget* = NULL);
    void upPlotData(double, int);
    void setMaxYAxisValue(double, int);
    double getMaxYAxisValue(int);
    void resetPlot();
    void setLineVisible(int, bool);

private:
    void alignScales();

    QwtPlotPicker *picker;
    QwtPlotCurve *cy = new QwtPlotCurve();
    QwtPlotCurve *cy1 = new QwtPlotCurve(tr("cy1"));
    QwtPlotCurve *cy2 = new QwtPlotCurve(tr("cy2"));
    QwtPlotCurve *cy3 = new QwtPlotCurve(tr("cy3"));
    QwtPlotCurve *cy4 = new QwtPlotCurve(tr("cy4"));
    QwtPlotCurve *cy5 = new QwtPlotCurve(tr("cy5"));
    QwtPlotCurve *cy6 = new QwtPlotCurve(tr("cy6"));
    QwtPlotCurve *cy7 = new QwtPlotCurve(tr("cy7"));
    QwtPlotCurve *cy8 = new QwtPlotCurve(tr("cy8"));

    QwtPlotCurve *cysw = new QwtPlotCurve(tr("cysw"));
    QwtPlotCurve *cygs = new QwtPlotCurve(tr("cygs"));


    double maxZValue;
    double maxFValue;
    double xAxis[PLOT_SIZE];
    double yAxis[PLOT_SIZE];
    double yAxis1[PLOT_SIZE];
    double yAxis2[PLOT_SIZE];
    double yAxis3[PLOT_SIZE];
    double yAxis4[PLOT_SIZE];
    double yAxis5[PLOT_SIZE];
    double yAxis6[PLOT_SIZE];
    double yAxis7[PLOT_SIZE];
    double yAxis8[PLOT_SIZE];

    double yAxissw[PLOT_SIZE];
    double yAxisgs[PLOT_SIZE];

};




#endif // DATAPLOT

