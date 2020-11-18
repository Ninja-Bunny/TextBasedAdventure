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
    void runToPass(); 
    Stage* currentStage; 
    Stage* endingStage; 
    map<string, Stage*> stages; 
    map<string, Stage*> haveToPass; 


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
        if(stages[currentStage->getNext()]->toPass) //wenn die nächste Stage im verlauf eine ist, die man bestehen muss, geht es hier rein 
        {
            currentStage->run(); 
            runToPass();    //special Teil folgt, da man hier in einem Loop ist 
        }
        currentStage->run();
        currentStage=stages[currentStage->getNext()];
    }

    //schleife in der das Spiel läuft 
}

void Game::setUpStage() // Erstellt die Stages, und speichert alle wichtigen Infos 
{
    string file = "stages.txt"; //read which file
    ifstream input(file); //Exception Handling? 
    string buffer, toPass, stageID, stageName, description, question; //Strings for class Stages
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
            input >> toPass;
            
            stages[stageID] = new Stage(stageID, stageName, description, question, toPass); //new Stage with input content
            if(stages[stageID]->toPass)
            {
                haveToPass[stageID] = stages[stageID]; //neue Map mit allen Fächern, die man bestehen muss 
            }
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

void Game::runToPass()
{   
    int stageCounter = stoi(currentStage->getID()); //mitzählen für stageID
    string userInput = ""; 
    string sName = ""; 
    bool input; 

    while(!haveToPass.empty()) 
    {
        input = false; 
        
        while(!input) {
            slowPrinting("Welches Fach möchtest du bestreiten?"); 
            cout << endl; 
            for(auto const& x : haveToPass)
            {
                cout << "~ "; 
                slowPrinting(x.second->getName()); 
            }
            cout << endl << ">> "; 
            //ignoriert alle eingaben, die davor vllt gemacht worden sind
            getline(cin, userInput); 

            cout << endl; 
            transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
            
            for(auto const& x : haveToPass) 
            {
                sName = x.second->getName(); 
                transform(sName.begin(), sName.end(), sName.begin(), ::tolower);

                if(sName == userInput)
                {
                    currentStage = stages[x.first]; 
                    input = true; 
                }
            }
            if(!input) 
            {
                slowPrinting("Keine Übereinstimmung mit dem Stundenplan. Bitte versuche es erneut."); 
                cout << endl; 
            }
        }
        currentStage->run(); 
        haveToPass.erase(currentStage->getID()); //löscht Stage from have to Pass
        ++stageCounter; 

    }
    currentStage = stages[to_string(stageCounter+1)]; 

}
#endif
