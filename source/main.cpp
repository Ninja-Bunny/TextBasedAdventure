#include <iostream>

using namespace std; 

#include "../include/Game.hpp"
#include "../include/Helpful.hpp"
#include "../include/stageMethods.hpp"
#include "../include/termcolor.hpp"


int main() {

    /* TESTING */
    //informatik();
    //englisch(); 

    //mathe(); 
    cout << termcolor::red; 
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