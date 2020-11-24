#ifndef PROGRAMMIEREN_HPP
#define PROGRAMMIEREN_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Programmieren : public Stage{
    public: 
        Programmieren(); 
        ~Programmieren(); 
        bool specificRun(); 

}; 

#endif