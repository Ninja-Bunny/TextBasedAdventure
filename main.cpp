#include <iostream>

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "stageMethods.hpp"
#include "prologue.hpp"

int main() {

    clearScreen();
    /* TESTING */
    //betriebssysteme(); //ich teste gerade noch
    //setColour(); 
    //cout << "test" << endl;
    Game game; 
    game.run(); 

    /*prologue();
    if (prologue() == true) 
    {
        Game game; 
        game.run(); 
    }
    else if (prologue() == false) {
        cout << "Schade!";
    }
    else 
    {
        cout << "Schade!";
    }*/

    return 0;
}