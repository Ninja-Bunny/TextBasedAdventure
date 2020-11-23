#ifndef HELPFUL_HPP
#define HELPFUL_HPP

#ifdef _WIN32 //Windows
    #include <Windows.h>
#else //Linux, macOS
    #include <unistd.h>
#endif

#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <thread>
#include <chrono> //microsec
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime> //Zeit-Funktion
#include "../include/termcolor.hpp"

using namespace std; 


int inline trandom() {
    int num;
    srand(time(0)); //SOrgt dafür, dass eine zufaellige Zahl später mit rand() aufgerufen wird
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}


void inline sleepFor(int i)
{
    this_thread::sleep_for(chrono::microseconds(i));
}

void inline slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) { 
        cout << s[i] << flush; //Ausgabe Buchstabe per Buchstabe 
        sleepFor((s[i] % 8)*8000+20000);  //Zufaellige Schlafenzeit, damit es natuerlicher wirkt
    }
    cout << endl; 

}

void inline clearScreen()
{
    #ifdef _WIN32
        system("CLS");
    #else
        system("clear");
    #endif
}

void inline hyphens(string title)
{
    for(int i = 0; i < ("|| " + title + " ||").size(); i++) //Trennstriche in Laenge der ueberschrift
    {
        cout << "-";
    }
    cout << endl;
}

void inline stars(string title)
{
    for(int i = 0; i < (title.size() +2); i++) //Sterne in Laenge der ueberschrift
    {
        cout << "*";
    }
    cout << endl;
}

void inline timer(int seconds) 
{
    for (int i = seconds; i > 0; i--) 
    {
        cout << i << ", " << flush;
        sleepFor(1000000); //=1 Sekunde in Mikrosekunden
        //clearScreen();
        if (i == 1) {
            cout << "0!";
        }
    }
}

#endif