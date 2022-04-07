#include "timer.h"

#include <QTimer>
#include <QDateTime>
#include <QGraphicsScene>

timer::timer()
{
}

void timer::showTimer(QGraphicsScene *scene){
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
}
