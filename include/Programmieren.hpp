#ifndef PROGRAMMIEREN_HPP
#define PROGRAMMIEREN_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class Programmieren : public Stage{
    public: 
        Programmieren(); 
        bool specificRun(); 

}; 

Programmieren::Programmieren()
{
    this -> id = "3";
    this->name = "Programmieren"; 
    this->description = "Deine Programmierkuenste in C++ nehmen rasant zu. Weisst du die Loesung?";
    this->description2 = "Hier kommt die ultrawichtige Frage!";
    this->toPass = true;
}
bool Programmieren::specificRun()
{
    return true;
}
#endif