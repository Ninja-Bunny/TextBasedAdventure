
#include "../include/Stage.hpp"
#include "../include/Betriebssysteme.hpp"

Betriebssysteme::Betriebssysteme()
{
    this->id = "5";
    this->name = "Betriebssysteme"; 
    this->description = "Fuer die Klausurvorbereitung im Fach Betriebssysteme gibt es genau 100 Folien.";
    this->description2 = "Welche Folie wird wohl in der Klausur drankommen?";
    this->toPass = true;  
}

bool Betriebssysteme::specificRun()
{
    cout << termcolor::white;
    int num = trandom(); 
    bool passed = false; 
    int guess, tries = 0;
    do {
        slowPrinting("Nenne eine Zahl zwischen 1 und 100: "); 
        cout << endl; 
        cout << ">> ";
        cin >> guess;
        cin.ignore(); //brauche ich nach dem cin >>, damit in der Game::run() mein getline keinen Fehler produziert
        tries++;

        if(tries >=3) //Drei Versuche, soll so gut wie unmöglich sein das Fach zu bestehen!
        {
            cout << "Leider falsch, um die Pruefung zu bestehen haettest du die Seite " << num << " lernen muessen!" << endl << endl;
            slowPrinting("Du bist wie fast jeder im Kurs durchgefallen.");
            cout << endl;
            sleepFor(2000000);
            passed = false; 
        }
        else if (guess > num) 
        {
            cout << "Die Zahl " << guess << " war leider zu hoch, versuche es nochmal: " << endl;
            passed = false; 
        }
        else if (guess < num)
        {
            cout << "die Zahl " << guess << " war leider zu niedrig, versuche es nochmal: " << endl;
            passed = false; 
        }
        else if (guess == num)
        {
            cout << "Du hast als einer der Einzigen im Kurs bestanden!" << endl;
            passed = true; 
        }
        else 
        {
            cout << "Die Eingabe war ungültig." << endl;
            passed = false; 
        }
    } while (guess != num && tries < 3); //Drei Versuche
    return passed; 
}