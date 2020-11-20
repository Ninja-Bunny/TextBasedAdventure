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
    this->description = "Hier ist Logik gefragt.";
    this->description2 = "Wie logisch arbeitet dein Gehirn?";
    this->toPass = true;
}

bool Informatik::specificRun()
{
    string logic = "a || !a";
    string zahl;
    slowPrinting("Frage: Wie kann die folgende Aussage in der Aussagenlogik noch bezeichnet werden?");
    slowPrinting("(Tippe 1, 2, 3, 4 oder 5 ein!)");
    cout << endl;
    slowPrinting("a || !a");
    cout << endl << "1) Tautologie";
    cout << endl << "2) Tertium non datur";
    cout << endl << "3) Das Gegenstueck zu einer Kontradiktion";
    cout << endl << "4) Prinzip vom ausgeschlossenen Dritten";
    cout << endl << "5) Disjunktive Normalform (DNF)" << endl << endl << ">> ";
    cin >> zahl;
    cin.ignore();
    if (zahl == "1"||"2"||"3"||"4"||"5")
    {
        cout << endl;
        slowPrinting("Da hast du vollkommen recht!");
        sleepFor(1000000);
        slowPrinting("Achja ...");
        sleepFor(2000000);
        slowPrinting("Alle genannten Antworten waren uebrigens richtig. Hoffentlich hast du dir nicht den Kopf zerbrochen!");
        cout << endl;
        return true;
    }
    else 
    {
        cout << endl;
        slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
        return false;
    }
}

#endif