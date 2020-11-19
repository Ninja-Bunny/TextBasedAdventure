#ifndef AUSWERTUNG_HPP
#define AUSWERTUNG_HPP

#include "Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "Helpful.hpp"

class Auswertung : public Stage{
    public: 
        Auswertung(); 
        bool specificRun(); 

}; 

Auswertung::Auswertung()
{
    this -> id = "8";
    this->name = "Auswertung der Klausuren"; 
    this->description = "Die Klausurergebnisse sind da!";
    this->description2 = "Hast du bestanden?";
    this->toPass = false;  
}
bool Auswertung::specificRun()
{
 return true; 
}

#endif