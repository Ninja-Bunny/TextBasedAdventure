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
    //cout << "test" << endl;
    //Game game; 
    //game.run(); 
    bool start = prologue(); 
    clearScreen(); 

    if(start)
    {
        Game game; 
        game.run(); 
    }
    else if (!start) {
        cout << "Schade!";
    }
    else 
    {
        cout << "Schade!";
    }

    return 0;
}