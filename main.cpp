#include <iostream>

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "stageMethods.hpp"
#include "prologue.hpp"

int main() {
    /* TESTING */
    //betriebssysteme(); //ich teste gerade noch
    //setColour(); 
    //cout << "test" << endl;
    prologue();
    Game game; 
    game.run(); 

    slowPrinting("Das hier ist ein Test. Wirst du das Spiel bestehen? Oder wirst du davor sterben?"); //slow prints text

    return 0;
}

