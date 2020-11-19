#ifndef GAME_HPP
#define GAME_HPP


#include <iostream>
#include <fstream>
#include <map>
#include "Stage.hpp"
#include "Helpful.hpp"

using namespace std;

class Game
{
    public: 
        Game(); //Konstruktor 
        //~Game(); //Destruktor -> brauchen wir den? 
        void run(); //wichtig, wird in main() aufgerufen
        bool prologue(); //startet Prolog
    private: 
        void setUpStage(); //liest stages aus txt ein
        bool runToPass(); // lässt die Fächer laufen, die man bestehen muss 
        void fail(bool b); //prüft ob man das Spiel verloren hat
 
        Stage* currentStage; //Pointer, der auf die aktuelle Stage zeigt
        Stage* endingStage; //Pointer, der auf die End Stage zeigt
        map<string, Stage*> stages; //speichert alle stages
        map<string, Stage*> haveToPass; //speichert die Stages, die man bestehen muss 
}; 

Game::Game() //Konstruktor Definition 
{
    currentStage = nullptr; 
    endingStage = nullptr; 
    setUpStage(); 
}

void Game::run() //run() soll game starten
{
    while(currentStage != endingStage) //Schleife, in der das Spiel läuft 
    {
        if(stages[currentStage->getNext()]->toPass) //Wenn die nächste Stage im Verlauf eine ist, die man bestehen muss, geht es hier rein 
        {
            fail(currentStage->run()); 
            fail(runToPass());    //special Teil folgt, da man hier in einem Loop ist 
        }
        fail(currentStage->run());
        currentStage=stages[currentStage->getNext()];
    }
}

void Game::setUpStage() // Erstellt die Stages, und speichert alle wichtigen Infos 
{
    string file = "stages.txt"; //Auslesen der Infos aus Textdatei
    ifstream input(file); //Exception Handling? 
    string buffer, toPass, stageID, stageName, description, question; //Strings for class Stages
    while (input >> buffer) //liest Strings aus txt file  
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
                haveToPass[stageID] = stages[stageID]; //Neue Map mit allen Fächern, die man bestehen muss 
            }
        } else if (buffer == "STARTING_STAGE")
        {
            input >> buffer; 
            currentStage = stages[buffer]; //STARTING_STAGE ist jetzt current state

        } else if (buffer == "ENDING_STAGE")
        {
            input >> buffer; 
            endingStage = stages[buffer]; //Markiert Ende
        }
    }
}

bool Game::runToPass()
{   
    int stageCounter = stoi(currentStage->getID()); //mitzählen für stageID
    int passCounter = 0; //mitzählen, wie viele man bestanden hat 
    string userInput = ""; 
    string sName = ""; 
    bool input; 

    while(!haveToPass.empty()) //solange die Liste nicht leer ist, in der die Fächer sind
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

            getline(cin, userInput); 

            cout << endl; 
            transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower); //alles klein transformieren zum vergleich
            
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
        if(currentStage->run()) //wenn die aktuelle stage bestanden worden ist, wird der passCOunter erzhöht
        {
            ++passCounter; 
        }; 
        haveToPass.erase(currentStage->getID()); //löscht Stage from have to Pass
        ++stageCounter; 

    }
    currentStage = stages[to_string(stageCounter+1)]; //setzt die aktuelle stage auf die, nach den Fächern
    if(passCounter>2) //wenn man mehr als 2 Fächer bestanden hat, darf man weiterspielen
    {
        return true; 
    } 
    else
    {
        return false; 
    }
    
}

void Game::fail(bool b)
{
    if(!b) //wenn verloren 
    {
        clearScreen(); 
        slowPrinting("YOU FAILED"); 
        slowPrinting("Diesmal hat es nicht gereicht. WIr sehen uns beim nächsten Versuch!"); 
        exit(0); 
    }
}

bool Game::prologue() 
{
    slowPrinting("Denkst du wirklich du bist der Herausforderung eines dualen Studiums im Fach IT-Security gewachsen?");
    slowPrinting("Nunja ");
    cout << endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout << "." << endl; ;
        sleepFor(500000);
    }
    cout << endl;
    slowPrinting("Wir werden sehen!");
    sleepFor(800000); //kurze Pause um das Gelesene zu verarbeiten 
    clearScreen();
    slowPrinting("Willst du die Simulation starten?");
    slowPrinting("Tippe 'Ja' um fortzufahren und 'Nein' um abzubrechen: ");
    cout << endl << ">> ";
    string begin;
    cin >> begin;
    cin.ignore(); 
    if (begin == "Ja")
    {
        //cout << "Ja";
        return true;
    }
    else if (begin == "Nein")
    {
        //cout << "Nein";
        return false;
    }
    else
    {
        //cout << "Nochmal";
        return false;
    }
}

#endif
