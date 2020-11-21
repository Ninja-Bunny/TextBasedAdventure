#include "../include/Stage.hpp"
#include "../include/Chef.hpp"


Chef::Chef()
{
    this -> id = "7";
    this->name = "Mail vom Chef"; 
    this->description = "Du erhaeltst eine Top Secret Mail von deinem Chef, der dich bittet sofort und diskret 10.000 EUR an euren Partner zu ueberweisen.";
    this->description2 = "Was tust du?";
    this->toPass = false;  
}

bool Chef::specificRun()
{
    string antwort;
    cout << termcolor::magenta;
    cout << endl << "1) Das Geld unverzueglich an den Partner ueberweisen." << endl;
    cout << "2) Die 10.000 EUR an dich ueberweisen." << endl;
    cout << "3) Die Mail ignorieren und deinen Chef anrufen." << endl;
    cout << endl << ">> ";
    cin >> antwort;
    cin.ignore();
    if (antwort == "3") 
    {
        cout << endl;
        slowPrinting("Das war die einzig richtige Antwort! Dein Chef lobt dich und die Mail stellt sich als Phishing-Betrug heraus.");
        sleepFor(3000000);
        return true;
    }
    else 
    {
        cout << endl;
        slowPrinting("Das war leider die falsche Entscheidung und du fliegst aus dem Unternehmen. Hierbei handelte es sich um eine Phishing E-Mail.");
        return false;
    }
}