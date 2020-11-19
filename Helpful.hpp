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

using namespace std; 

void slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) { 
        cout << s[i] << flush; //Ausgabe Buchstabe per Buchstabe 
        this_thread::sleep_for(chrono::microseconds((s[i] % 8)*8000+20000));  //Zufällige Schlafenzeit, damit es natürlicher wirkt
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

void sleepFor(int i)
{
    this_thread::sleep_for(chrono::microseconds(i));
}

#endif