#include <iostream>

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"


int main() {
    Game game; 
    Helpful h; 
    h.clearScreen(); //clears Terminal screen
    h.slowPrinting("Das hier ist ein Test. Wirst du das Spiel bestehen? Oder wirst du davor sterben?"); //slow prints text
    //game.run();


}