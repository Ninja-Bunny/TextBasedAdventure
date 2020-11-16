#ifndef GAME_HPP
#define GAME_HPP
#endif

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "Stage.hpp"

using namespace std; 


class Game
{
    public: 
    Game(); //Constructor 
    ~Game(); //Destructor -> brauchen wir den? 
    void run(); 
    void setUpStage(); 

    private: 


}; 

Game::Game() //define Constructor 
{

}

void Game::run() //define void run -> should run/start the game 
{
    //schleife in der das Spiel läuft 
}

void Game::setUpStage() 
{
    string file = "stages.txt"; //read which file
    ifstream input(file);
    string buffer, stageID, stageName, description, choice1, choice2, choice3, choice4, choice5; 
}

