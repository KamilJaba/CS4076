#include "roomgenerator.h"
#include "room.h"

RoomGenerator::RoomGenerator()
{
    //code to generate the room array.
    Room playableRooms[10];
    for (int i = 0; i < 10; i++) {
        playableRooms[i].setDescription(to_string(i));
    }
}

Room RoomGenerator::returnRoom(int roomNum)
{
    return playableRooms[roomNum]; //.getDescription();
}
