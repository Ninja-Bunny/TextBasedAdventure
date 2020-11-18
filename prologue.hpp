#ifndef PROLOGUE_HPP
#define PROLOGUE_HPP

#include <iostream>
#include "Helpful.hpp"

using namespace std;

void prologue() //Evtl. könnten wir das auch in die Game Klasse packen? dann müssen wir nicht immer für einzelne Methoden eine neue hpp aufmachen. 
{
    slowPrinting("Denkst du ernsthaft du bist der Herausforderung eines dualen Studiums im Fach IT-Security gewachsen?");
    slowPrinting("Nunja . . . ");
    cout << endl;
    slowPrinting("Wir werden sehen!");
    sleepFor(2000000); //kurze Pause um das gelesene zu verarbeiten
    clearScreen();
}

#endif