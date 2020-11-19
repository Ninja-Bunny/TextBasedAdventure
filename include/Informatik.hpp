#ifndef INFORMATIK_HPP
#define INFORMATIK_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class Informatik : public Stage{
    public: 
        Informatik(); 
        bool specificRun(); 

}; 

Informatik::Informatik()
{
    this->id = "6";
    this->name = "Informatik"; 
    this->description = "Hier ist Logik gefragt. Wie logisch arbeitet dein Gehirn? ";
    this->description2 = "Hier kommt die ultrawichtige Frage! ";
    this->toPass = true;
}

bool Informatik::specificRun()
{
    return true;
}
#endif