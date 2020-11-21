#include "../include/Assessment.hpp"
#include "../include/Stage.hpp"

using namespace std;

Assessment::Assessment()
{
    this -> id = "0"; 
    this->name = "Assessment Center"; 
    this->description = "Herzlichen Glueckwunsch!";
    this->description2 = "Du wurdest zum Auswahlverfahren eingeladen.";
    this->toPass = false;  
}

bool Assessment::specificRun()
{
    cout << termcolor::magenta;
    bool a1 = false; //antwort 1
    bool a2 = false; //antwort 2
    string userInput; 
    sleepFor(1000000);
    slowPrinting("Vor Ort hat der Personaler einige Fragen an dich. ");
    sleepFor(2000000);

    cout << "1. Frage: 'Darf ich Ihnen etwas zu trinken anbieten?'" << endl;
    sleepFor(1000000);
    slowPrinting("Was antwortest du? (Tippe 1, 2 oder 3 ein)");
    cout << endl << "1) 'Nein danke, ich habe keinen Durst.'" << endl;
    cout << "2) 'Ja, ich haette gerne einen Espresso mit Milchschaum.'" << endl;
    cout << "3) 'Ja, sehr gerne.'" << endl;
    cout << endl << ">> ";

    int answer1;
    cin >> userInput;
    try
    {
        answer1 = stoi(userInput); 
    }
    catch(const std::exception& e)
    {
        slowPrinting("Du hast leider keine Zahl eingegeben. Ich hoffe das war nur ein Fehler."); 
    }
    
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
        cin >> userInput;
    try
    {
        answer2 = stoi(userInput); 
    }
    catch(const std::exception& e)
    {
        slowPrinting("Du hast leider keine Zahl eingegeben. Ich hoffe das war nur ein Fehler."); 
    }
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
            slowPrinting("Du musst naechstes mal die Aufgabenstellung genauer lesen, schoener schreiben oder eine gültige Zahl eingeben!");
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