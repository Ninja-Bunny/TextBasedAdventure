#ifndef STAGEMETHODS_HPP
#define STAGEMETHODS_HPP

#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime> //Zeit-Funktion
#include "../include/Helpful.hpp"

using namespace std;

/*int trandom() {
    int num;
    srand(time(0)); //Generiert eine zufällige Zahl mithilfe der aktuellen Uhrzeit in Sekunden
    num = 1 + rand() % 100; //Modulo 100 bewirkt, dass sich die Zahl immer zwischen 1 und 100 befindet
    return num;
}*/

bool betriebssysteme() 
{
    int num = trandom(); 
    bool passed = false; 
    int guess, tries = 0;
    do {
        slowPrinting("Nenne eine Zahl zwischen 1 und 100: "); 
        cout << endl; 
        cin >> guess;
        cin.ignore(); //brauche ich nach dem cin >>, damit in der Game::run() mein getline keinen Fehler produziert
        tries++;

        if(tries >=3) //Drei Versuche, soll so gut wie unmöglich sein das Fach zu bestehen!
        {
            cout << endl << "Leider falsch, um die Pruefung zu bestehen haettest du die Seite " << num << " lernen muessen!" << endl << endl;
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
            cout << "Du hast die richtige Folie gelernt und die Klausur als einer der Einzigen im Kurs bestanden!" << endl << endl;
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

bool assessment() 
{
    bool a1 = false; //antwort 1
    bool a2 = false; //antwort 2
    sleepFor(1000000);
    slowPrinting("Vor Ort hat der Personaler einige Fragen an dich. ");
    sleepFor(2000000);
    clearScreen();

    cout << "1. Frage: 'Darf ich Ihnen etwas zu trinken anbieten?'" << endl;
    sleepFor(1000000);
    slowPrinting("Was antwortest du? (Tippe 1, 2 oder 3 ein)");
    cout << endl << "1) 'Nein danke, ich habe keinen Durst.'" << endl;
    cout << "2) 'Ja, ich haette gerne einen Espresso mit Milchschaum.'" << endl;
    cout << "3) 'Ja, sehr gerne.'" << endl;
    cout << endl << ">> ";

    int answer1;
    cin >> answer1;
    cin.ignore(); 
    cout << endl; 
    switch (answer1) //switch case hier am Sinnvollsten
    {
        case 1:
            slowPrinting("Diese Antwort kommt nicht gut beim Personaler an, da es wie eine Zurueckweisung wirkt.");
            cout << endl; 
            a1 = false; //hier bist du immer direkt aus der ganzen funktion rausgeflogen, wegen dem return statement
            break;
        case 2:
            slowPrinting("Diese Antwort kommt nicht gut beim Personaler an, da es unangebracht ist Sonderwuensche zu aeussern.");
            cout << endl; 
            a1 = false;
            break;
        case 3:
            slowPrinting("Sehr gut, du hast alles richtig gemacht!");
            a1 = true;
            break;
        default:
            slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
            a1 = false;
    } 

    cout << endl << "2. Frage: 'Wo hat die Deutsche Telekom AG ihren Hauptsitz?'" << endl;
    slowPrinting("Was antwortest du? (Tippe 1, 2 oder 3 ein)");
    cout << endl << "1) Muenchen";
    cout << endl << "2) Bonn";
    cout << endl << "3) Frankfurt" << endl;
    cout << endl << ">> ";

    int answer2;
    cin >> answer2;
    cin.ignore(); 
    cout << endl; 

    switch (answer2)
    {
        case 1:
            slowPrinting("Leider falsch, Bonn waere die richtige Antwort gewesen");
            a2 = false;
            break;
        case 2:
            slowPrinting("Richtig, der Hauptsitz der Telekom ist in Bonn.");
            a2 = true;
            break;
        case 3:
            slowPrinting("Leider falsch, Bonn waere die richtige Antwort gewesen");
            a2 = false;
            break;
        default:
            slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
            a2 = false;
    }
    if(!a1 && !a2) //nur wenn beide Antworten falsch waren fliegt man raus 
    {
        return false; 
    }
    else
    {
        slowPrinting("Du hast mindestens eine Frage richtig beantwortet und kommst somit weiter!");
        sleepFor(2000000);
        return true; 
    }
    
}

bool mathe() {
    int z;
    int ergebnis = (3*7)%5;
    cout << endl << "Berechnen Sie 3x7(mod 5)! Es genuegt lediglich das Ergebnis zu notieren." << endl;
    cout << endl << ">> ";
    cin >> z;
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
        slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
        return false;
    }
}

bool programmieren() {
    int a = 3, b = 2, z;
    b = a++;
    int ergebnis = ++b;
    cout << endl;
    string longestLine = "| cout << ++b;";
    stars(longestLine);
    cout << "* int a = 3;   *" << endl;
    cout << "* int b = 2;   *" << endl;
    cout << "* b = a++;     *" << endl;
    cout << "* cout << ++b; *" << endl;
    stars(longestLine);
    cout << endl << ">> ";
    cin >> z;
    cin.ignore();
    if (z == ergebnis)
    {
        slowPrinting("Das ist korrekt!");
        cout << endl;
        sleepFor(1000000);
        return true;
    }
    else
    {
        slowPrinting("Leider falsch, schaue dir die folgende Erklaerung aus der Vorlesung nochmal an:");
        cout << endl;
        cout << "Prefix increments the value, and then proceeds with the expression." << endl;
        cout << "Postfix evaluates the expression and then performs the incrementing." << endl << endl;
        slowPrinting("Wenn du fertig bist, druecke einfach Enter!");
        sleepFor(1000000);
        cin.ignore();
        return false;
    }
}

bool englisch() {
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
    slowPrinting("Remember the number you choose!");
    cout << endl;
    timer(10);
    clearScreen();
    slowPrinting("Type 1, 2, 3, 4 or 5 and press enter!");
    cout << endl << ">> ";
    cin >> answer;
    cin.ignore();
    if (answer == "4") 
    {
        cout << endl;
        slowPrinting("Well done!");
        slowPrinting("Here is a useful sentence for you:");
        cout << endl;
        slowPrinting("It's necessary for a shirt to have 1 collar (-> 1*c) and 2 sleeves (-> 2*s)!");
        cout << endl << "Press Enter to continue!";
        cin;
        return true;
    }
    else if (answer != "4")
    {
        slowPrinting("Sadly you were wrong!");
        slowPrinting("Here is a useful sentence for you:");
        cout << endl;
        slowPrinting("It's necessary for a shirt to have 1 collar (-> 1*c) and 2 sleeves (-> 2*s)!");
        cout << endl << "Press Enter to continue!";
        cin.ignore();
        return false;
    }
    else 
    {
        return false;
    }
}

bool informatik() {
    string logic = "a || !a";
    string zahl;
    slowPrinting("Wie kann die folgende Aussage in der Aussagenlogik noch bezeichnet werden?");
    slowPrinting("(Tippe 1, 2, 3, 4 oder 5 ein!)");
    cout << endl;
    slowPrinting("a || !a");
    cout << endl << "1) Tautologie";
    cout << endl << "2) Tertium non datur";
    cout << endl << "3) Das Gegenstueck zu einer Kontradiktion";
    cout << endl << "4) Prinzip vom ausgeschlossenen Dritten";
    cout << endl << "5) Disjunktive Normalform (DNF)" << endl << endl << ">> ";
    cin >> zahl;
    cin.ignore();
    if (zahl == "1"||"2"||"3"||"4"||"5")
    {
        cout << endl;
        slowPrinting("Da hast du vollkommen recht!");
        sleepFor(1000000);
        slowPrinting("Achja ...");
        sleepFor(2000000);
        slowPrinting("Alle genannten Antworten waren uebrigens richtig. Hoffentlich hast du dir nicht den Kopf zerbrochen!");
        return true;
    }
    else 
    {
        cout << endl;
        slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen oder schoener schreiben!");
        return false;
    }
}

bool chef() {
    return true;
}

bool auswertung() {
    return true;
}

#endif


