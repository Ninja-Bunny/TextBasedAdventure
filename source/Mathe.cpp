#include "../include/Stage.hpp"
#include "../include/Mathe.hpp"

Mathe::Mathe()
{
    this -> id = 2;
    this->name = "Mathe"; 
    this->description = "Du sitzt im Matheunterricht und bist am verzweifeln. Ob du folgende Frage loesen kannst?";
    this->description2 = "Hier kommt die ultrawichtige Frage! ";
    this->toPass = true;
}

Mathe::~Mathe()
{
    
}

bool Mathe::specificRun()
{
    cout << termcolor::white;
    int z;
    int ergebnis = (3*7)%5;
    string userInput; 
    cout << endl << "Berechnen Sie 3x7(mod 5)! Es genuegt lediglich das Ergebnis zu notieren." << endl;
    cout << endl << ">> ";
    cin >> userInput;
    try //Exception-Handling
    {
        z = stoi(userInput); //Wenn keine Ganzzahl eingegeben wird
    }
    catch(const std::exception& e) //const Referenz => Polymorphie
    {
        slowPrinting("Du hast leider keine Zahl eingegeben. Ich hoffe das war nur ein Fehler."); 
    }
    
    cin.ignore(); 
    if (z == ergebnis) 
    {
        slowPrinting("Super! Das Ergebnis lautet 1, genauso wie deine Note im Fach Mathematik.");
        cout << endl;
        sleepFor(1000000);
        return true;
    }
    else 
    {   
        slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen, schoener schreiben oder eine gueltige Zahl eingeben!");
        return false;
    }
}