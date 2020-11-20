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
    this->description = "Deine Programmierkuenste in C++ nehmen rasant zu.";
    this->description2 = "Was ist der Output von folgendem Code:";
    this->toPass = true;
}
bool Programmieren::specificRun()
{
    int a = 3, b = 2, z;
    b = a++;
    int ergebnis = ++b;
    cout << endl;
    string longestLine = "| cout << ++b;";
    stars(longestLine);
    cout << "* int a = 3;   *" << endl;
    cout << "* int b = 2;   *" << endl;
    cout << "* b = a++;     *" << endl;
    cout << "* cout << ++b; *" << endl;
    stars(longestLine);
    cout << endl << ">> ";
    cin >> z;
    cin.ignore();
    if (z == ergebnis)
    {
        slowPrinting("Das ist korrekt!");
        cout << endl;
        sleepFor(1000000);
        return true;
    }
    else
    {
        slowPrinting("Leider falsch, schaue dir die folgende Erklaerung aus der Vorlesung nochmal an:");
        cout << endl;
        cout << "Prefix increments the value, and then proceeds with the expression." << endl;
        cout << "Postfix evaluates the expression and then performs the incrementing." << endl << endl;
        slowPrinting("Wenn du fertig bist, druecke einfach Enter!");
        sleepFor(1000000);
        cin.ignore();
        return false;
    }
}

#endif