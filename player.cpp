#include "player.h"
#include <QKeyEvent>

#include <QDebug>

void player(){

}


void player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left | event->key() == Qt::Key_A) {
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right | event->key() == Qt::Key_D) {
        if (pos().x() + 100 < 1080)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Up | event->key() == Qt::Key_W) {
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down | event->key() == Qt::Key_S) {
        setPos(x(),y()+10);
    }
}
