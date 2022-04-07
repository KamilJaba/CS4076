#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

class player: public QGraphicsPixmapItem
{
public:
    player() {
       //gives the player graphics
       setPixmap(QPixmap(":/Player/playertest.png"));
    }
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER_H
