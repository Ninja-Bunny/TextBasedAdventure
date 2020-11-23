#include "../include/Stage.hpp"
#include "../include/BeginnSemester.hpp"

BeginnSemester::BeginnSemester()
{
    this -> id = 1;
    this->name = "Beginn Semester"; 
    this->description = "Du hast es geschafft und es geht direkt weiter in die Hochschule.";
    this->description2 = "Dein Stundenplan ist vollgepackt mit vielen wichtigen Faechern.";
    this->toPass = false;  
}

BeginnSemester::~BeginnSemester()
{
    
}

bool BeginnSemester::specificRun()
{
    return true;
}
