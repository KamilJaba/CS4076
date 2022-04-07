#ifndef PLAY_H
#define PLAY_H

#include "room.h"
#include "spawnroom.h"

class play
{
private:
//    Parser parser;
//    Room *currentRoom;
//    void createRooms();
//    void printWelcome();
//    bool processCommand(Command command);
//    void printHelp();
//    void goRoom(Command command);
//    void createItems();
//    void displayItems();
    void createRooms();
    Room *currentRoom;
    spawnRoom spawn = new spawnRoom();
    void goToRoom(spawn);

public:
    play();
    void play();
    string go(string direction);
};

#endif // PLAY_H
