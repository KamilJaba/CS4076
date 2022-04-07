#include "roommanager.h"
#include <string>
#include <iostream>
#include "room.h"
using namespace std;

RoomManager::RoomManager()
{

}

void RoomManager::createRooms()
{
    std::string roomNames[8] = { "spawn" , "aFood", "aColor", "aAnimal", "bSports", "bCountries", "bMusic", "endRoom" };
    for(int roomNo = 1; roomNo < 8; roomNo++) {
        std::string temp = roomNames[roomNo];
        Room(temp);
    }
}
