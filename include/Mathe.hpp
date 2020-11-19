#ifndef MATHE_HPP
#define MATHE_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class Mathe : public Stage{
    public: 
        Mathe(); 
        bool specificRun(); 

}; 

Mathe::Mathe()
{
    this -> id = "2";
    this->name = "Mathe"; 
    this->description = "Du sitzt im Matheunterricht und bist am verzweifeln. Ob du folgende Frage loesen kannst?";
    this->description2 = "Hier kommt die ultrawichtige Frage! ";
    this->toPass = true;
}

bool Mathe::specificRun()
{
    int z;
    int ergebnis = (3*7)%5;
    cout << endl << "Berechnen Sie 3x7(mod 5)! Es genuegt lediglich das Ergebnis zu notieren." << endl;
    cout << endl << ">> ";
    cin >> z;
    cin.ignore(); 
    if (z == ergebnis) 
    {
        slowPrinting("Super! Das Ergebnis lautet 1, genauso wie deine Note im Fach Mathematik.");
        cout << endl;
        sleepFor(1000000);
        return true;
    }
    else 
    {   
        slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
        return false;
    }
}
#endif