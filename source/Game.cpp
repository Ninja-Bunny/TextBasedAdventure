
#include "../include/Game.hpp"

using namespace std;

Game::Game() //Konstruktor Definition 
{
    currentStage = nullptr; 
    endingStage = nullptr;
    
    setUpStage(); 
}

void Game::run() //run() soll game starten
{
    while(currentStage != endingStage) //Schleife, in der das Spiel läuft 
    {
        if(stages[currentStage->getNext()]->toPass) //Wenn die nächste Stage im Verlauf eine ist, die man bestehen muss, geht es hier rein 
        {
            currentStage->run(); 
            fail(currentStage->specificRun()); 
            fail(runToPass());    //special Teil folgt, da man hier in einem Loop ist 
        }
        currentStage->run();
           
        fail(currentStage->specificRun());
        currentStage=stages[currentStage->getNext()];
    }
    currentStage->run();
    endingStage->specificRun(); 
}

void Game::setUpStage() // Erstellt die Stages, und speichert alle wichtigen Infos 
{
    stages["0"] = new Assessment(); 
    stages["1"] = new BeginnSemester();
    stages["2"] = new Mathe();
    stages["3"] = new Programmieren();
    stages["4"] = new Englisch();
    stages["5"] = new Betriebssysteme();
    stages["6"] = new Informatik();
    stages["7"] = new Chef();
    stages["8"] = new Auswertung();

    for (auto const& x : stages)
    {
        if(x.second->toPass)
        {
            haveToPass[x.first] = x.second; 
        }
    }
    currentStage = stages["0"]; 
    endingStage = stages["8"]; 
}

bool Game::runToPass()
{   
    
    int stageCounter = stoi(currentStage->getID()); //mitzählen für stageID
    int passCounter = 0; //mitzählen, wie viele man bestanden hat 
    string userInput = ""; 
    string sName = ""; 
    bool input; 

    while(!haveToPass.empty()) //solange die Liste nicht leer ist, in der die Fächer sind
    {
        input = false; 
        
        while(!input) {
            cout << termcolor::cyan;
            slowPrinting("Welches Fach moechtest du bestreiten?"); 
            cout << endl; 
            for(auto const& x : haveToPass)
            {
                cout << "~ "; 
                slowPrinting(x.second->getName()); 
            }
            cout << endl << ">> "; 

            getline(cin, userInput); 

            cout << endl; 
            transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower); //alles klein transformieren zum vergleich
            
            for(auto const& x : haveToPass) 
            {
                sName = x.second->getName(); 
                transform(sName.begin(), sName.end(), sName.begin(), ::tolower);

                if(sName == userInput)
                {
                    currentStage = stages[x.first]; 
                    input = true; 
                }
            }
            if(!input) 
            {
                slowPrinting("Keine Übereinstimmung mit dem Stundenplan. Bitte versuche es erneut."); 
                cout << endl; 
            }
        }
        currentStage->run();

        
        if(currentStage->specificRun()) //wenn die aktuelle stage bestanden worden ist, wird der passCOunter erzhöht
        {
            ++passCounter; 
        }; 
        haveToPass.erase(currentStage->getID()); //löscht Stage from have to Pass
        ++stageCounter; 

    }
    currentStage = stages[to_string(stageCounter+1)]; //setzt die aktuelle stage auf die, nach den Fächern
    if(passCounter>2) //wenn man mehr als 2 Fächer bestanden hat, darf man weiterspielen
    {
        return true; 
    } 
    else
    {
        return false; 
    }
    
}

void Game::fail(bool b)
{
    if(!b) //wenn verloren 
    {
        cout << termcolor::red;
        clearScreen(); 
        slowPrinting("YOU FAILED"); 
        cout << endl; 
        slowPrinting("Diesmal hat es nicht gereicht. Wir sehen uns beim nächsten Versuch!"); 
        exit(0); 
    }
}

bool Game::prologue() 
{
    cout << termcolor::white;
    slowPrinting("Denkst du wirklich du bist der Herausforderung eines dualen Studiums im Fach IT-Security gewachsen?");
    slowPrinting("Nunja ");
    cout << endl; 
    for (int i = 0; i < 3; i++) 
    {
        cout << "." << endl; ;
        sleepFor(500000);
    }
    cout << endl;
    slowPrinting("Wir werden sehen!");
    sleepFor(800000); //kurze Pause um das Gelesene zu verarbeiten 
    clearScreen();
    cout << termcolor::red;
    slowPrinting("Willst du die Simulation starten?");
    slowPrinting("Tippe 'Ja' um fortzufahren oder etwas anderes um abzubrechen: ");
    cout << endl << ">> ";
    string begin;
    cin >> begin;
    cin.ignore(); 
    cout << endl; 
    if (begin == "Ja" || begin == "ja")
    {
        return true;
    }
    else
    {
        return false;
    }
}