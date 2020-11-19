#include <iostream>

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "stageMethods.hpp"


int main() {

    /* TESTING */
    //betriebssysteme(); //ich teste gerade noch
    //cout << "test" << endl;
    //Game game; 
    //game.run(); 
    Game game; //erstellt neue Game instanz
    clearScreen(); 

    if(game.prologue()) //wenn user spielen will -> starte spiel
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