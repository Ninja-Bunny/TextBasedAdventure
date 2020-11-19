#include <iostream>

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "stageMethods.hpp"


int main() {

    /* TESTING */
    //mathe();
    
    Game game; //erstellt neue Game Instanz
    clearScreen(); 

    if(game.prologue()) //Wenn user spielen will -> starte spiel
    {
        clearScreen();
        game.run(); 
    }
    else 
    {
        cout << endl << "Schade! Dann bis zum naechsten Mal!";
    }
    return 0;
}