#ifndef BEGINSEMESTER_HPP
#define BEGINSEMESTER_HPP

#include "Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "Helpful.hpp"

class BeginnSemester : public Stage{
    public: 
        BeginnSemester(); 
        bool specificRun(); 

}; 

BeginnSemester::BeginnSemester()
{
    this -> id = "1";
    this->name = "Beginn Semester"; 
    this->description = "Du hast es geschafft und es geht direkt weiter in die Hochschule.";
    this->description2 = "Dein Stundenplan ist vollgepackt mit vielen wichtigen Faechern.";
    this->toPass = false;  
}

bool BeginnSemester::specificRun()
{
    
}

#endif