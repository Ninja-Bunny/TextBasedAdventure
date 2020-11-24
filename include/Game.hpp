#ifndef GAME_HPP
#define GAME_HPP

#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include "../include/Stage.hpp"
#include "../include/Assessment.hpp"
#include "../include/BeginnSemester.hpp"
#include "../include/Betriebssysteme.hpp"
#include "../include/Chef.hpp"
#include "../include/Englisch.hpp"
#include "../include/Informatik.hpp"
#include "../include/Mathe.hpp"
#include "../include/Programmieren.hpp"
#include "../include/Auswertung.hpp"
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

using namespace std;

class Game
{
    public: 
        Game(); //Konstruktor 
        ~Game(); //Destruktor
        void run(); //wichtig, wird in main() aufgerufen
        bool prologue(); //startet Prolog

    private: //Datenkapselung
        void setUpStage(); //liest stages aus txt ein
        bool runToPass(); // laesst die Faecher laufen, die man bestehen muss 
        void fail(bool b); //prueft ob man das Spiel verloren hat

        int passCounter; 
        Stage* currentStage; //Pointer, der auf die aktuelle Stage zeigt
        Stage* endingStage; //Pointer, der auf die End Stage zeigt
        map<int, Stage*> stages; //speichert alle stages - Anfangs string wegen Auslesen aus stages.txt, int aber jetzt geeigneter (Wertebereich/Genauigkeit)
        map<int, Stage*> haveToPass; //speichert die Stages, die man bestehen muss - siehe Z.39
}; 

#endif
