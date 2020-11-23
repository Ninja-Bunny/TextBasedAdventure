#include "../include/Stage.hpp"
#include "../include/Englisch.hpp"

Englisch::Englisch()
{
    this -> id = 4;
    this->name = "Englisch"; 
    this->description = "Let's change the language and test your english skills!";
    this->description2 = "You will need to be quick for this one...";
    this->toPass = true;
}

Englisch::~Englisch()
{
    
}

bool Englisch::specificRun()
{
    cout << termcolor::white;
    string answer;
    bool a = false; 
    cout << "What is the correct english word for 'notwendig'?" << endl;
    sleepFor(1000000);
    cout << endl << "1) neccesary";
    cout << endl << "2) neccessary";
    cout << endl << "3) necesarry";
    cout << endl << "4) necessary";
    cout << endl << "5) necassary" << endl << endl;;
    sleepFor(2000000);
    slowPrinting("You have 10 seconds from NOW!");
    slowPrinting("Just remember the number you want to choose!");
    sleepFor(1000000);
    timer(10); 
    cout << endl;
    cout << endl; 
    clearScreen();
    cout << endl << ">> ";
    cin >> answer;
    cout << endl; 
    cin.ignore();
    if (answer == "4") 
    {
        slowPrinting("Well done!");
        a = true;
    }
    else
    {
        slowPrinting("Sadly you were wrong!");
        a = false;
    }
    slowPrinting("Here is a useful sentence for you:");
    cout << endl;
    slowPrinting("It's necessary for a shirt to have 1 collar (-> 1*c) and 2 sleeves (-> 2*s)!");
    cout << endl << "Press Enter to continue!" << endl;
    cin.ignore(); 
    return a; 
}