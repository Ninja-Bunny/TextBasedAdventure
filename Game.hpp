#ifndef GAME_H
#define GAME_H
#endif

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "Room.h"

using namespace std; 


class Game
{
    public: 
    Game(); //Constructor 
    ~Game(); //Destructor -> brauchen wir den? 
    void run(); 
    void createRoom(string id, string name, string description, string north, string east, string south, string west); 
    void roomSetUp(); 
    map<string, Room*> rooms; 

    private: 
    Room* currentRoom; 
    string endRoom; 


}; 

Game::Game() //define Constructor 
{
    currentRoom = nullptr; 
    string endRoom = ""; 
    roomSetUp(); 
}

void Game::run() //define void run -> should run/start the game 
{
    //schleife in der das Spiel läuft 
}

void Game::roomSetUp()
{
    string file = "rooms.txt"; 
    ifstream input (file); 
    
    string buffer, id, name, description, north, east, south, west; 

    while(input >> buffer)
    {
        if(buffer == "BEGIN_ROOM")
        {
            input >> id; 
            input.ignore(); 
            getline(input, name); 
            getline(input, description); 

            input >> buffer; //North
            input >> north; 

            input >> buffer; //East
            input >> east; 

            input >> buffer; //South
            input >> south; 

            input >> buffer; //West
            input >> west; 

            createRoom(id, name, description, north, east, south, west); 
        }
        else if(buffer == "START_ROOM")
        {
            input >> buffer; 
            currentRoom = rooms[buffer]; 
        }
        else if(buffer == "END_ROOM")
        {
            input >> endRoom; 
        }
    }
}

void Game::createRoom(string id, string name, string description, string north, string east, string south, string west)
{
    rooms[id]= new Room(id, name, description); 
    rooms[id]-> set
}
