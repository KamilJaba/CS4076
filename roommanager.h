#ifndef ROOMMANAGER_H
#define ROOMMANAGER_H

#include "room.h"
#include <string>
using namespace std;

class RoomManager
{
public:
    //what can a room do
    Room(string roomName);
    void createRooms();
    void teleportToRoom(string RoomName);
    void spawnWorlde();
    void wordleCleared();
    string getRoomType();
};

#endif // ROOMMANAGER_H
