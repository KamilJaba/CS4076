#include "room.h"
#include <stdlib.h>

Room::Room()
{
    this->description;
}

Room::Room(string description) {
    this->description = description;
}

string Room::getDescription()
{
    return this->description;
}

void Room::setDescription(string description)
{
    this->description = description;
}



string Room::nextRoom()
{
    string temp = this->getDescription();
    int temp2 = stoi(temp) + 1;
    temp = to_string(temp2);
    return temp;
}
