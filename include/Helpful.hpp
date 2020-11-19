#ifndef HELPFUL_HPP
#define HELPFUL_HPP

#ifdef _WIN32 //Windows
    #include <Windows.h>
#else //Linux, macOS
    #include <unistd.h>
#endif

#include <string>
#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono> //microsec
#include <cstdlib> //Für zufällige Zahlen
#include <ctime> //Zeit-Funktion

using namespace std; 

int trandom() {
    int num;
    srand(time(0)); //Generiert eine zufällige Zahl mithilfe der aktuellen Uhrzeit in Sekunden
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}


void sleepFor(int i)
{
    this_thread::sleep_for(chrono::microseconds(i));
}

void slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) { 
        cout << s[i] << flush; //Ausgabe Buchstabe per Buchstabe 
        sleepFor((s[i] % 8)*8000+20000);  //Zufällige Schlafenzeit, damit es natürlicher wirkt
    }
    cout << endl; 

}

void clearScreen()
{
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

void hyphens(string title)
{
    for(int i = 0; i < ("|| " + title + " ||").size(); i++) //Trennstriche in Länge der Überschrift
    {
        cout << "-";
    }
    cout << endl;
}



#endif