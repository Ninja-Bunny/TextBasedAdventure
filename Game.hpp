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
    setUpStage(); 
}

void Game::run() //define void run -> should run/start the game 
{
    //schleife in der das Spiel läuft 
}

void Game::setUpStage() // Erstellt die Stages, und speichert alle wichtigen Infos 
{
    string file = "stages.txt"; //read which file
    ifstream input(file); //Exception Handling? 
    string buffer, stageID, stageName, description, question, choice0, choice1, choice2, choice3, choice4; 
    while (input >> buffer)
    {
        if(buffer == "BEGIN_STAGE")
        {
            input >> stageID; 
            input.ignore(); 
            getline(input, stageName); 
            getline(input, description); 
            getline(input, question); 

            input >> buffer; 
            getline(input, choice0);
            input >> buffer; 
            getline(input, choice1); 
            input >> buffer; 
            getline(input, choice2);
            input >> buffer; 
            getline(input, choice3);
            input >> buffer; 
            getline(input, choice4);
            

            stages[stageID] = new Stage(stageID, stageName, description, question, choice0, choice1, choice2, choice3, choice4); 
        } else if (buffer == "STARTING_STAGE")
        {
            input >> buffer; 
            currentStage = stages[buffer];

        } else if (buffer == "ENDING_STAGE")
        {
            input >> buffer; 
            endingStage = stages[buffer]; 
        }
    }
}



