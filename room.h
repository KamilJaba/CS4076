#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;

class Room
{

private:
    //used in wordle
    string roomtype;

public:
    //what can a room do
    Room(string description);
    void createRoom();
    void teleportToRoom(std::string RoomName);
    void spawnWorlde();
    void wordleCleared();
    string getRoomType();

};

#endif // ROOM_H
