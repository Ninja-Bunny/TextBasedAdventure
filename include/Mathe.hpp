#ifndef MATHE_HPP
#define MATHE_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Mathe : public Stage{
    public: 
        Mathe(); 
        bool specificRun(); 

}; 

#endif