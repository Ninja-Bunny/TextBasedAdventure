#ifndef ROOM_HPP
#define ROOM_HPP
#endif

#include <iostream>
#include <string> 
using namespace std; 

class Room
{
    public: 
        Room(); 

    private: 
        string id; 
        string name; 
        string description; 
        string neighbour[4]; 
}; 

Room::Room()
{

}


