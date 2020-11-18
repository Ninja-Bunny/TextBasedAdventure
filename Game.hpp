#ifndef GAME_HPP
#define GAME_HPP


#include <iostream>
#include <fstream>
#include <map>
#include "Stage.hpp"

using namespace std; 


class Game
{
    public: 
    Game(); //Konstructor 
    //~Game(); //Destructor -> brauchen wir den? 
    void run(); 
     

    private: 
    void setUpStage();
    Stage* currentStage; 
    Stage* endingStage; 
    map<string, Stage*> stages; 


}; 

Game::Game() //define Constructor 
{
    currentStage = nullptr; 
    endingStage = nullptr; 
    setUpStage(); 
}

void Game::run() //define void run -> should run/start the game 
{
    while(currentStage != endingStage) 
    {
        currentStage->run();
        currentStage=stages[currentStage->getNext()];
    }

    //schleife in der das Spiel läuft 
}

void Game::setUpStage() // Erstellt die Stages, und speichert alle wichtigen Infos 
{
    string file = "stages.txt"; //read which file
    ifstream input(file); //Exception Handling? 
    string buffer, stageID, stageName, description, question; //Strings for class Stages
    while (input >> buffer)
    {
        if(buffer == "BEGIN_STAGE")
        {
            input >> stageID; 
            input.ignore(); 
            getline(input, stageName); 
            getline(input, description); 
            getline(input, question); 
            
            stages[stageID] = new Stage(stageID, stageName, description, question); //new Stage with input content
        } else if (buffer == "STARTING_STAGE")
        {
            input >> buffer; 
            currentStage = stages[buffer]; //Starting Stage is now the current state

        } else if (buffer == "ENDING_STAGE")
        {
            input >> buffer; 
            endingStage = stages[buffer]; //so we know when to stop
        }
    }
}
#endif
