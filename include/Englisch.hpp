#ifndef ENGLISCH_HPP
#define ENGLISCH_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Englisch : public Stage{
    public: 
        Englisch(); 
        bool specificRun(); 

}; 

Englisch::Englisch()
{
    this -> id = "4";
    this->name = "Englisch"; 
    this->description = "We changed the language?";
    this->description2 = "Let's test your english skills! You will need to be quick for this one...";
    this->toPass = true;
}

bool Englisch::specificRun()
{
   string answer;
    cout << "What is the correct english word for 'notwendig'?" << endl;
    sleepFor(1000000);
    cout << endl << "1) neccesary";
    cout << endl << "2) neccessary";
    cout << endl << "3) necesarry";
    cout << endl << "4) necessary";
    cout << endl << "5) necassary" << endl << endl;;
    sleepFor(2000000);
    slowPrinting("You have 10 seconds from NOW!");
    slowPrinting("Write whenever you feel ready. Don't forget to press enter.");
    timer(10); 
    cout << endl;
    cout << endl; 
    //clearScreen();
    //slowPrinting("Type 1, 2, 3, 4 or 5 and press enter!");
    cout << endl << ">> ";
    cin >> answer;
    cout << answer << endl; 
    //cin.ignore();
    if (answer == "4") 
    {
        cout << endl;
        slowPrinting("Well done!");
        slowPrinting("Here is a useful sentence for you:");
        cout << endl;
        slowPrinting("It's necessary for a shirt to have 1 collar (-> 1*c) and 2 sleeves (-> 2*s)!");
        cout << endl << "Press Enter to continue!";
        cin.ignore(); 
        return true;
    }
    else
    {
        slowPrinting("Sadly you were wrong!");
        slowPrinting("Here is a useful sentence for you:");
        cout << endl;
        slowPrinting("It's necessary for a shirt to have 1 collar (-> 1*c) and 2 sleeves (-> 2*s)!");
        cout << endl << "Press Enter to continue!";
        cin.ignore(); 
        return false;
    }
}
#endif