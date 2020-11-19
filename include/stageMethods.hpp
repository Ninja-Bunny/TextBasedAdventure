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
    cout << endl;
    string firstLine = "| int a = 3;";
    string lastLine = "| cout << ++b;";
    hyphens(lastLine);
    cout << "| int a = 3;" << endl;
    cout << "| int b = 2;" << endl;
    cout << "| b = a++;" << endl;
    cout << "| cout << ++b;" << endl;
    cout << endl;

	const unsigned int x = 5, y = 5; 
    char frame[x][y] = { '\0' }; 
    for(unsigned int i = 0; i < x; ++i) 
    { 
		frame[i][0] = '#'; 
        frame[i][y - 1] = '#'; 
        for(unsigned int j = 0; j < y; ++j) 
        { 
			frame[0][j] = '#'; 
            frame[y - 1][j] = '#'; 
        }                                             
    }
	for(int i = 0; i < y; i++) 
	{    
		for(int j = 0; j < x; j++) 
		{
		      cout << frame[i][j]; 
		
		}
                cout << endl; // NICHT-VERGESSEN!
	}

    return true;
}

bool englisch() {
    return true;
}

bool informatik() {
    return true;
}

bool chef() {
    return true;
}

bool auswertung() {
    return true;
}

#endif


