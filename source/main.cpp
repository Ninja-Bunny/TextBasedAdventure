#include <iostream>

using namespace std; 

#include "../include/Game.hpp"
#include "../include/Helpful.hpp"
//#include "stageMethods.hpp"


int main() {

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