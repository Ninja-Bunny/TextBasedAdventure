#ifndef STAGEMETHODS_HPP
#define STAGEMETHODS_HPP

#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime> //Zeit-Funktion
#include "Helpful.hpp"

using namespace std;

int trandom() {
    int num;
    srand(time(0)); //Generiert eine zufällige Zahl mithilfe der aktuellen Uhrzeit in Sekunden
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}

void betriebssysteme() 
{
    int num = trandom(); 
    int guess, tries = 0;
    do {
        slowPrinting("Nenne eine Zahl zwischen 1 und 100: "); 
        cout << endl; 
        cin >> guess;
        cin.ignore(); //brauche ich nach dem cin >>, damit in der Game::run() mein getline keinen Fehler produziert
        tries++;

        if(tries >=3) //Drei Versuche, soll so gut wie unmöglich sein das Fach zu bestehen!
        {
            cout << endl << "Leider falsch, um die Pruefung zu bestehen haettest du die Seite " << num << " lernen muessen!" << endl << endl;
        }
        else if (guess > num) 
        {
            cout << "Die Zahl " << guess << " war leider zu hoch, versuche es nochmal: " << endl;
        }
        else if (guess < num)
        {
            cout << "die Zahl " << guess << " war leider zu niedrig, versuche es nochmal: " << endl;
        }
        else if (guess == num)
        {
            cout << "Du hast als einer der Einzigen im Kurs bestanden!" << endl;
        }
        else 
        {
            cout << "Die Eingabe war ungültig." << endl;
        }
    } while (guess != num && tries < 3); //Drei Versuche
}

bool assessment() 
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

bool mathe() {
    return true;
}

bool programmieren() {
    return true;
}

bool englisch() {
    return true;
}

bool informatik() {
    return true;
}

bool chef() {
    return true;
}

bool auswertung() {
    return true;
}

#endif


