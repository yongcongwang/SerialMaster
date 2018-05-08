#include "dataplot.h"

DataPlot::DataPlot(QWidget *parent):
    QwtPlot(parent)
{
    //disable polygon clipping
    QwtPainter::setPolylineSplitting(false);

    //remove cache

    alignScales();

    //initialize data
    for(int i = 0; i < PLOT_SIZE; i++)
    {
        xAxis[i] = i;
        yAxis[i] = 0;
        yAxis1[i] = 0;
        yAxis2[i] = 0;
        yAxis3[i] = 0;
        yAxis4[i] = 0;
        yAxis5[i] = 0;
        yAxis6[i] = 0;
        yAxis7[i] = 0;
        yAxis8[i] = 0;

        yAxissw[i] = 0;
        yAxisgs[i] = 0;

    }
    maxZValue = 10;
    maxFValue = -10;

    // show a legend
    //insertLegend(new QwtLegend(), QwtPlot::BottomLegend);

    //insert new curves
//    QwtPlotCurve *cy = new QwtPlotCurve(tr("cy"));
    cy->setRenderHint(QwtPlotItem::RenderAntialiased);
    cy->attach(this);
    cy->setPen(QPen(QColor(170, 255, 0),2));

//    QwtPlotCurve *cy1 = new QwtPlotCurve(tr("cy1"));
    cy1->attach(this);
    cy1->setPen(QPen(Qt::yellow,2));

//    QwtPlotCurve *cy2 = new QwtPlotCurve(tr("cy2"));
    cy2->attach(this);
    cy2->setPen(QPen(QColor(255, 0, 255),2));

//    QwtPlotCurve *cy3 = new QwtPlotCurve(tr("cy3"));
    cy3->attach(this);
    cy3->setPen(QPen(QColor(0, 255, 255),2));

//    QwtPlotCurve *cy4 = new QwtPlotCurve(tr("cy4"));
    cy4->attach(this);
    cy4->setPen(QPen(QColor(0, 85, 255),2));

//    QwtPlotCurve *cy5 = new QwtPlotCurve(tr("cy5"));
    cy5->attach(this);
    cy5->setPen(QPen(QColor(0, 85, 0),2));

//    QwtPlotCurve *cy6 = new QwtPlotCurve(tr("cy6"));
    cy6->attach(this);
    cy6->setPen(QPen(QColor(0, 0, 0),2));

//    QwtPlotCurve *cy6 = new QwtPlotCurve(tr("cy6"));
    cy7->attach(this);
    cy7->setPen(QPen(QColor(85,0,255),2));

//    QwtPlotCurve *cy8 = new QwtPlotCurve(tr("cy8"));
    cy8->attach(this);
    cy8->setPen(QPen(QColor(255,170,127),2));

    cysw->attach(this);
    cysw->setPen(QPen(QColor(255,0,0), 4));

    cygs->attach(this);
    cygs->setPen(QPen(QColor(255,165,0), 4));


    //attach data. both curve use the same x array.
    cy->setRawSamples(xAxis, yAxis, PLOT_SIZE);
    cy1->setRawSamples(xAxis, yAxis1, PLOT_SIZE);
    cy2->setRawSamples(xAxis, yAxis2, PLOT_SIZE);
    cy3->setRawSamples(xAxis, yAxis3, PLOT_SIZE);
    cy4->setRawSamples(xAxis, yAxis4, PLOT_SIZE);
    cy5->setRawSamples(xAxis, yAxis5, PLOT_SIZE);
    cy6->setRawSamples(xAxis, yAxis6, PLOT_SIZE);
    cy7->setRawSamples(xAxis, yAxis7, PLOT_SIZE);
    cy8->setRawSamples(xAxis, yAxis8, PLOT_SIZE);

    cysw->setRawSamples(xAxis, yAxissw, PLOT_SIZE);
    cygs->setRawSamples(xAxis, yAxisgs, PLOT_SIZE);



    //set axis title
    //    setAxisTitle(QwtPlot::xBottom, tr("time"));
        setAxisScale(QwtPlot::xBottom, 0, 100);

    //    setAxisTitle(QwtPlot::yLeft, tr("value"));
        setAxisScale(QwtPlot::yLeft, -10, 10);

    //right click move curves
    QwtPlotPanner *panner = new QwtPlotPanner(this->canvas());
    panner->setMouseButton(Qt::RightButton);

    //mouse wheel zoom the curves
    QwtPlotMagnifier *magnifier = new QwtPlotMagnifier(this->canvas());
    magnifier->setMouseButton(Qt::NoButton);
    magnifier->setAxisEnabled(QwtPlot::xBottom, false);

    //a selector, cross, xBottom &yLeft
//    picker = new QwtPlotPicker()
//    picker = new QwtPlotPicker(QwtPlot::xBottom, QwtPlot::yLeft, 1, QwtPlotPicker::CrossRubberBand, QwtPicker::ActiveOnly, this->canvas());
    picker = new QwtPlotPicker(this->canvas());
    picker->setAxis(QwtPlot::xBottom, QwtPlot::yLeft);
    picker->setRubberBand(QwtPlotPicker::CrossRubberBand);
    picker->setTrackerMode(QwtPlotPicker::ActiveOnly);
    picker->setStateMachine(new QwtPickerDragPointMachine()); //drag point enable
    picker->setRubberBandPen(QPen(QColor(Qt::gray)));
    picker->setTrackerPen(QColor(Qt::yellow));

    //set background color
    setAutoFillBackground(true);
    this->canvas()->setPalette(QPalette(QColor(Qt::darkCyan)));

    //set grid
    QwtPlotGrid *grid = new QwtPlotGrid;
    grid->enableXMin(true);
    grid->setMajorPen(QPen(Qt::white, 0, Qt::DotLine));// large grid
    grid->setMinorPen(QPen(Qt::gray, 0, Qt::DotLine));
    grid->attach(this);

}

void DataPlot::alignScales()
{
    for(int i = 0; i < QwtPlot::axisCnt; i++)
    {
        QwtScaleWidget *scaleWidget = (QwtScaleWidget *) axisWidget(i);
        if(scaleWidget)
        {
            scaleWidget->setMargin(0);
        }

        QwtScaleDraw *scaleDraw = (QwtScaleDraw *) axisScaleDraw(i);
        if(scaleDraw)
        {
            scaleDraw->enableComponent(QwtAbstractScaleDraw::Backbone, false);

        }
    }
}

void DataPlot::upPlotData(double d1, int d2)
{
    switch (d2)
    {
    case 0:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis[i] = yAxis[i - 1];
        }

        yAxis[0] = d1;
        break;
    }
    case 1:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis1[i] = yAxis1[i - 1];
        }

        yAxis1[0] = d1;
        break;
    }
    case 2:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis2[i] = yAxis2[i - 1];
        }

        yAxis2[0] = d1;
        break;
    }
    case 3:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis3[i] = yAxis3[i - 1];
        }

        yAxis3[0] = d1;
        break;
    }
    case 4:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis4[i] = yAxis4[i - 1];
        }

        yAxis4[0] = d1;
        break;
    }
    case 5:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis5[i] = yAxis5[i - 1];
        }

        yAxis5[0] = d1;
        break;
    }
    case 6:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis6[i] = yAxis6[i - 1];
        }

        yAxis6[0] = d1;
        break;
    }
    case 7:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis7[i] = yAxis7[i - 1];
        }

        yAxis7[0] = d1;
        break;
    }
    case 8:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxis8[i] = yAxis8[i - 1];
        }

        yAxis8[0] = d1;
        break;
    }

    case 9:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxissw[i] = yAxissw[i - 1];
        }

        yAxissw[0] = d1;
        break;
    }
    case 10:
    {
        for(int i = PLOT_SIZE - 1; i > 0; i--)
        {
            yAxisgs[i] = yAxisgs[i - 1];
        }

        yAxisgs[0] = d1;
        break;
    }

    default:break;
    }

    replot();
}

void DataPlot::setLineVisible(int numb, bool bl)
{
    if(bl)
    {
        switch (numb)
        {
        case 0:
            cy->setVisible(true);
            break;
        case 1:
            cy1->setVisible(true);
            break;
        case 2:
            cy2->setVisible(true);
            break;
        case 3:
            cy3->setVisible(true);
            break;
        case 4:
            cy4->setVisible(true);
            break;
        case 5:
            cy5->setVisible(true);
            break;
        case 6:
            cy6->setVisible(true);
            break;
        case 7:
            cy7->setVisible(true);
            break;
        case 8:
            cy8->setVisible(true);
            break;
        case 9:
            cysw->setVisible(true);
            break;
        case 10:
            cygs->setVisible(true);
            break;

        default: break;

        }

    }
    else
    {
        switch(numb)
        {
        case 0:
            cy->setVisible(false);
            break;
        case 1:
            cy1->setVisible(false);
            break;
        case 2:
            cy2->setVisible(false);
            break;
        case 3:
            cy3->setVisible(false);
            break;
        case 4:
            cy4->setVisible(false);
            break;
        case 5:
            cy5->setVisible(false);
            break;
        case 6:
            cy6->setVisible(false);
            break;
        case 7:
            cy7->setVisible(false);
            break;
        case 8:
            cy8->setVisible(false);
            break;        
        case 9:
            cysw->setVisible(false);
            break;
        case 10:
            cygs->setVisible(false);
            break;
        default: break;
        }
    }
}

void DataPlot::setMaxYAxisValue(double dValue, int flag)
{
    if(flag == 1)
    {
        maxZValue = dValue;
        setAxisScale(QwtPlot::yLeft, maxFValue, maxZValue);
    }
    else if(flag == 2)
    {
        maxFValue = dValue;
        setAxisScale(QwtPlot::yLeft, maxFValue, maxZValue);

    }
}

double DataPlot::getMaxYAxisValue(int flag)
{
    if(flag == 1)
        return maxZValue;
    else if(flag == 2)
        return maxFValue;
    else
        return 0;
}

void DataPlot::resetPlot()
{
//    maxZValue = maxFValue = 0;
//    for (int i = 0; i < PLOT_SIZE; i++)
//    {
//        if(yAxis[i] > maxZValue)
//            maxZValue = yAxis[i];
//        if(yAxis[i] < maxFValue)
//            maxFValue = yAxis[i];
//    }
//    replot();
    ;
}
