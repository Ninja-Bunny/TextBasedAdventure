#ifndef ENGLISCH_HPP
#define ENGLISCH_HPP

#include "Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "Helpful.hpp"

class Englisch : public Stage{
    public: 
        Englisch(); 
        bool specificRun(); 

}; 

Englisch::Englisch()
{
    this -> id = "4";
    this->name = "Mail vom Chef"; 
    this->description = "Du erhaeltst eine Top Secret Mail von deinem Chef, der dich bittet sofort und diskret 10.000 EUR an eurern Partner zu ueberweisen.";
    this->description2 = "Was tust du?";
    this->toPass = false;
}

bool Englisch::specificRun()
{
    
}
#endif