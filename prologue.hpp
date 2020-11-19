#ifndef PROLOGUE_HPP
#define PROLOGUE_HPP

#include <iostream>
#include "Helpful.hpp"

using namespace std;

bool prologue() //Evtl. könnten wir das auch in die Game Klasse packen? dann müssen wir nicht immer für einzelne Methoden eine neue hpp aufmachen. 
{
    slowPrinting("Denkst du wirklich du bist der Herausforderung eines dualen Studiums im Fach IT-Security gewachsen?");
    slowPrinting("Nunja ");
    cout << endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout << "." << endl; ;
        sleepFor(500000);
    }
    cout << endl;
    slowPrinting("Wir werden sehen!");
    sleepFor(2000000); //kurze Pause um das Gelesene zu verarbeiten 
    clearScreen();
    clearScreen();
    slowPrinting("Willst du die Simulation starten?");
    slowPrinting("Tippe 'Ja' um fortzufahren und 'Nein' um abzubrechen: ");
    cout << endl << ">> ";
    string begin;
    cin >> begin;
    if (begin == "Ja")
    {
        //cout << "Ja";
        return true; //ICH MÖCHTE IN MAIN BEI TRUE DIE GAME.RUN() EINFACH STARTEN MAN
    }
    else if (begin == "Nein")
    {
        //cout << "Nein";
        return false;
    }
    else
    {
        //cout << "Nochmal";
        return false;
    }
}

#endif