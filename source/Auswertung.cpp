#include "../include/Stage.hpp"
#include "../include/Auswertung.hpp"


Auswertung::Auswertung()
{
    this -> id = "8";
    this->name = "Auswertung der Klausuren"; 
    this->description = "Die Klausurergebnisse sind da!";
    this->description2 = "Hast du bestanden?";
    this->toPass = false;  
    this->passCounter = passCounter;
}
bool Auswertung::specificRun(passCounter)
{

    return true; 
}
