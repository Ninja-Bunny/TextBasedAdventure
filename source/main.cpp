#include <iostream>

using namespace std; 

#include "../include/Game.hpp"
#include "../include/Helpful.hpp"
#include "../include/stageMethods.hpp"
#include "../include/termcolor.hpp"


int main() {

    /* TESTING */
    
    Game game; //erstellt neue Game Instanz
    clearScreen(); 

    if(game.prologue()) //Wenn user spielen will -> starte spiel
    {
        clearScreen();
        game.run(); 
    }
    else 
    {   
        cout << termcolor::white; 
        cout << "Bis zum naechsten Mal!";
    }
    
    return 0;
}