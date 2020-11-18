#include <iostream> //@Melanie217 strings sind glaube ich in iostream enthalten oder?

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "Betriebssysteme.hpp"

int main() {
    bs(); //ich teste gerade noch
    Game game; 
    Helpful h; 
    h.clearScreen(); //clears Terminal screen
    h.slowPrinting("Das hier ist ein Test. Wirst du das Spiel bestehen? Oder wirst du davor sterben?"); //slow prints text
    //game.run();


}