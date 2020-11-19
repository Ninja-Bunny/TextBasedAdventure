#ifndef BEGINSEMESTER_HPP
#define BEGINSEMESTER_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class BeginSemester : public Stage{
    public: 
        BeginSemester(); 
        bool specificRun(); 

}; 

BeginSemester::BeginSemester()
{
    this -> id = "1";
    this->name = "Begin Semester"; 
    this->description = "Du hast es geschafft und es geht direkt weiter in die Hochschule.";
    this->description2 = "Dein Stundenplan ist vollgepackt mit vielen wichtigen Faechern.";
    this->toPass = false;  
}

bool BeginSemester::specificRun()
{
    return true;
}

#endif