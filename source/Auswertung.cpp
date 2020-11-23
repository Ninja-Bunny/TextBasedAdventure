#include "../include/Stage.hpp"
#include "../include/Auswertung.hpp"


Auswertung::Auswertung()
{
    this -> id = 8;
    this->name = "Auswertung der Klausuren"; 
    this->description = "Die Klausurergebnisse sind da!";
    this->description2 = "Hast du bestanden?";
    this->toPass = false; 
}
bool Auswertung::specificRun()
{
    cout << termcolor::white;
    slowPrinting("Glueckwunsch, du hast mindestens 3/5 Pruefungen bestanden und kommst somit in das naechste Semester!");
    slowPrinting("Doch jetzt hast du dir erst mal eine Pause verdient.");
    sleepFor(3000000);
    return true; 
}
