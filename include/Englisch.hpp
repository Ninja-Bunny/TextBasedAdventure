#ifndef ENGLISCH_HPP
#define ENGLISCH_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class Englisch : public Stage{
    public: 
        Englisch(); 
        bool specificRun(); 

}; 

Englisch::Englisch()
{
    this -> id = "4";
    this->name = "Englisch"; 
    this->description = "We changed the language? How good is your English? ";
    this->description2 = "Are you ready? 3 2 1     Goooooo";
    this->toPass = true;
}

bool Englisch::specificRun()
{
    return true;
}
#endif