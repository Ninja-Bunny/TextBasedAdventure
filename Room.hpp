#ifndef ROOM_HPP
#define ROOM_HPP
#endif

#include <iostream>
#include <string> 
using namespace std; 

struct Room
{
    Room(string name, string description); 
    void setNeighbours(Room* north, Room* east, Room* south, Room* west); 
    void initialization(string name = "", string description = ""); 

    string name; 
    string description; 
    Room* north; //eventuell auch array mit nacbarräumen? O.O soll das so kompliziert sein? 
    Room* east; 
    Room* south; 
    Room* west; 
}; 

Room::Room(string name, string description)
{
    initialization(name, description); 
}

void Room::setNeighbours(Room* north, Room* east, Room* south, Room* west)
{
    this->north = north; 
    this->east = east; 
    this->south = south; 
    this->west = west; 
}

void Room::initialization(string name /* = ""*/, string description /* = ""*/)
{
    this->name = name; 
    this-> description = description; 
    north = nullptr; 
    east = nullptr; 
    south = nullptr; 
    west = nullptr; 
}
