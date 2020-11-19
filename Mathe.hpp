#ifndef MATHE_HPP
#define MATHE_HPP

#include "Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "Helpful.hpp"

class Mathe : public Stage{
    public: 
        Mathe(); 
        bool specificRun(); 

}; 

Mathe::Mathe()
{
    this -> id = "2";
    this->name = "Mathe"; 
    this->description = "Du sitzt im Matheunterricht und bist am verzweifeln. Ob du folgende Frage loesen kannst?";
    this->description2 = "Hier kommt die ultrawichtige Frage! ";
    this->toPass = true;
}

bool Mathe::specificRun()
{
    
}
#endif