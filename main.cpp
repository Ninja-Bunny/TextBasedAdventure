#include <iostream> //@Melanie217 strings sind glaube ich in iostream enthalten oder?

using namespace std; 

#include "Game.hpp"
#include "Helpful.hpp"
#include "stageMethods.hpp"

int main() {

    clearScreen();
    

    //betriebssysteme(); //ich teste gerade noch
    Game game; 
    game.run(); 

     //clears Terminal screen
    slowPrinting("Das hier ist ein Test. Wirst du das Spiel bestehen? Oder wirst du davor sterben?"); //slow prints text
    //game.run();


}
