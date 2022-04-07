#include <QApplication>
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QFont>
#include "timer.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //creates a scene
    QGraphicsScene * scene = new QGraphicsScene();


    scene->setBackgroundBrush(QBrush(QImage(":/Backgrounds/startingbackground.png")));

    //creates the player "item" to put into game
    player * playerChar = new player();

    //add the item to the scene
    scene->addItem(playerChar);

    //make player focused for event triggers/movement
    playerChar->setFlag(QGraphicsItem::ItemIsFocusable);\
    playerChar->setFocus();

    //adds a view and gets rid of scrolling on screen
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //sets the view and scenes size to 1920x1080
    view->show();
    view->setFixedSize(1920,1080);
    scene->setSceneRect(0,0,1920,1080);

    //starts the character at the middle of the screen
    playerChar->setPos(view->width()/2,view->height()/2);

    return a.exec();
}
