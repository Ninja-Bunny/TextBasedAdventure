#ifndef ROOM_H
#define ROOM_H
#endif

#include <iostream>
#include <string> 
using namespace std; 

class Room
{
    public: 
        Room(); 
        Room(string id, string name, string description); 

    private: 
        string id; 
        string name; 
        string description; 
        string neighbour[4]; 
}; 

Room::Room()
{
    id = ""; 
    name = ""; 
    description = ""; 

    for(int i = 0; int i<4; i++)
    {
        string neighbour[i] = "NULL"
    }
}

Room::Room(string id, string name, string description)
{
    this->id = id; 
    this-> name = name; 
    this->description = description; 
//    neighbour[0] = north; 
    // neighbour[1] = east; 
    // neighbour[2] = south; 
    // neighbour[3] = west; 
}
