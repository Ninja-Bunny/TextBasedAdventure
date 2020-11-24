#ifndef STAGE_HPP
#define STAGE_HPP

#pragma once
#include <iostream>
#include <string> 
//#include "stageMethods.hpp"
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"


using namespace std; 

class Stage
{
    public: 
        Stage(); 
        ~Stage(); 
        void run(); 
        int getID(); 
        string const getName(); 
        string const getDescription(); 
        string const getDescription2(); 
        int const getNext(); //Muss das Fach bestanden werden? 
        virtual bool specificRun() = 0; //virtual, damit die derived classes aufgerufen werden.
        bool toPass;

    protected: //Datenkapselung
        int id;  //stageID
        string name; //stageName
        string description; //shortTest
        string description2; //Question to Answer
        bool passed; 
}; 

#endif


