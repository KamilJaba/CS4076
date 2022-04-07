#include "room.h"
#include <string>

Room::Room(string description) {
    this->roomtype = description;
}

void Room::createRoom()
{
    Room *spawn, *aFood, *aColor, *aAnimal, *bSports, *bCountries, *bMusic;

    spawn = new Room("Spawn");
    aFood = new Room("Food");
        //a->addItem(new Item("x", 1, 11));
        //a->addItem(new Item("y", 2, 22));
    aColor = new Room("Color");
        //b->addItem(new Item("xx", 3, 33));
        //b->addItem(new Item("yy", 4, 44));
    aAnimal = new Room("Animal");
    bSports = new Room("Sports");
    bCountries = new Room("Countries");
    bMusic = new Room("Music");

//             (N, E, S, W)
    //a->setExits(f, b, d, c);

    currentRoom = spawn;
}

void Room::teleportToRoom(string RoomName)
{

}

void Room::spawnWorlde()
{

}

string Room::getRoomType()
{
    return this->roomtype;
}
