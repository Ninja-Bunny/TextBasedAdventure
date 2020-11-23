#ifndef ENGLISCH_HPP
#define ENGLISCH_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Englisch : public Stage{
    public: 
        Englisch(); 
        ~Englisch(); 
        bool specificRun(); 

}; 

#endif