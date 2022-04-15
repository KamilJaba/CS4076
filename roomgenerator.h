#ifndef ROOMGENERATOR_H
#define ROOMGENERATOR_H
#include "room.h"
#include <string>

using namespace std;

class RoomGenerator
{
public:
    RoomGenerator();
    Room returnRoom(int roomNum);
    Room playableRooms[10];
};

#endif // ROOMGENERATOR_H
