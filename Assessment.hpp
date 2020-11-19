#ifndef ASSESSMENT_HPP
#define ASSESSMENT_HPP

#include "Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "Helpful.hpp"

class Assessment : public Stage{
    public: 
        Assessment(); 
        bool specificRun(); 

}; 

Assessment::Assessment()
{
    this -> id = "0"; 
    this->name = "Assessment Center"; 
    this->description = "Herzlichen Glueckwunsch!";
    this->description2 = "Du wurdest zum Auswahlverfahren eingeladen.";
    this->toPass = false;  
}

bool Assessment::specificRun()
{
    bool a1 = false; //antwort 1
    bool a2 = false; //antwort 2
    sleepFor(1000000);
    slowPrinting("Vor Ort hat der Personaler einige Fragen an dich. ");
    sleepFor(2000000);
    clearScreen();

    cout << "1. Frage: 'Darf ich Ihnen etwas zu trinken anbieten?'" << endl;
    sleepFor(1000000);
    slowPrinting("Was antwortest du? (Tippe 1, 2 oder 3 ein)");
    cout << endl << "1) 'Nein danke, ich habe keinen Durst.'" << endl;
    cout << "2) 'Ja, ich haette gerne einen Espresso mit Milchschaum.'" << endl;
    cout << "3) 'Ja, sehr gerne.'" << endl;
    cout << endl << ">> ";

    int answer1;
    cin >> answer1;
    cin.ignore(); 
    cout << endl; 
    switch (answer1) 
    {
        case 1:
            slowPrinting("Diese Antwort kommt nicht gut beim Personaler an, da es wie eine Zurückweisung wirkt.");
            cout << endl; 
            a1 = false; //hier bist du immer direkt aus der ganzen funktion rausgeflogen, wegen dem return statement
            break;
        case 2:
            slowPrinting("Diese Antwort kommt nicht gut beim Personaler an, da es unangebracht ist Sonderwuensche zu äussern.");
            cout << endl; 
            a1 = false;
            break;
        case 3:
            slowPrinting("Sehr gut, du hast alles richtig gemacht!");
            a1 = true;
            break;
        default:
            a1 = false;
    } 

    cout << "2. Frage: 'Wo hat die Deutsche Telekom AG ihren Hauptsitz?'" << endl;
    cout << endl << "1) München" << endl;
    cout << endl << "2) Bonn" << endl;
    cout << endl << "3) Frankfurt" << endl;
    cout << endl << ">> ";

    int answer2;
    cin >> answer2;
    cin.ignore(); 
    cout << endl; 

    switch (answer2)
    {
        case 1:
            slowPrinting("Leider falsch, Bonn wäre die richtige Antwort gewesen");
            a2 = false;
            break;
        case 2:
            slowPrinting("Richtig, der Hauptsitz der Telekom ist in Bonn.");
            a2 = true;
            break;
        case 3:
            slowPrinting("Leider falsch, Bonn wäre die richtige Antwort gewesen");
            a2 = false;
            break;
        default:
            a2 = false;
    }
    if(!a1 && !a2) //nur wenn beide Antworten falsch waren fliegt man raus 
    {
        return false; 
    }
    else
    {
        return true; 
    }
}

#endif