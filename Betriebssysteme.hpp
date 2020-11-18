#ifndef BETRIEBSSYSTEME_HPP
#define BETRIEBSSYSTEME_HPP

#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime> //Zeit-Funktion

using namespace std;

void bs() {
    cout << "Für die Klausurvorbereitung im Fach Betriebssysteme gibt es genau 100 Folien." << endl;
    cout << "Welche Folie wird wohl in der Klausur drankommen?" << endl;
    int num, guess, tries = 0;
    do {
        cout << "Nenne eine Zahl zwischen 1 und 100: " << endl;
        cin >> guess;
        tries++;
        if(tries >=3) 
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
            cout << "Du hast bestanden!" << endl;  
        }
        else 
        {
            cout << "Die Eingabe war ungültig." << endl;
        }
    } while (guess != num && tries < 3); // 3 mal raten? 

}

int trandom() {
    int num;
    srand(time(0)); //Generiert eine zufällige Zahl mithilfe der aktuellen Uhrzeit in Sekunden
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}

#endif