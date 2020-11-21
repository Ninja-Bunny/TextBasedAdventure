#ifndef BETRIEBSSYSTEME_HPP
#define BETRIEBSSYSTEME_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Betriebssysteme : public Stage{
    public: 
        Betriebssysteme(); 
        bool specificRun(); 

}; 

#endif