#ifndef STAGEMETHODS_HPP
#define STAGEMETHODS_HPP

#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime> //Zeit-Funktion

using namespace std;

int trandom() {
    int num;
    srand(time(0)); //Generiert eine zufällige Zahl mithilfe der aktuellen Uhrzeit in Sekunden
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}

void betriebssysteme() {
    int num = trandom(); 
    int guess, tries = 0;
    do {
        cout << "Nenne eine Zahl zwischen 1 und 100: " << endl;
        cin >> guess;
        cin.ignore(); //brauche ich nach dem cin >>, damit in der Game::run() mein getline keinen Fehler produziert
        tries++;

        if(tries >=3) //Drei Versuche, soll so gut wie unmöglich sein das Fach zu bestehen!
        {
            cout << "Leider falsch. Deine Zeit ist abgelaufen." << endl; 
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


#endif