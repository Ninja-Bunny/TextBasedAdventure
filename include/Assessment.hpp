#ifndef ASSESSMENT_HPP
#define ASSESSMENT_HPP

#pragma once 
//Vorgabe Schmidt
#include <iostream> 
#include <string> 
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/Stage.hpp"
#include "../include/termcolor.hpp"

class Assessment : public Stage{
    public: 
        Assessment(); //Konstruktor
        ~Assessment(); //Destruktor
        bool specificRun(); //virtuelle Klasse

}; 

#endif