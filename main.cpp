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
        game.run(); 
    }
    else 
    {
        cout << "Schade! Dann bis zu nächsten Mal!";
    }
    return 0;
}