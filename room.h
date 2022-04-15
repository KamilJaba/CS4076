#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <stdlib.h>

using namespace std;

class Room
{
public:
    Room();
    Room(string description);
    string getDescription();
    void setDescription(string description);
    string nextRoom();

private:
    string description;

};

#endif // ROOM_H
