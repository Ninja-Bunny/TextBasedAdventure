#ifndef BEGINNSEMESTER_HPP
#define BEGINNSEMESTER_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class BeginnSemester : public Stage{
    public: 
        BeginnSemester(); 
        bool specificRun(); 

}; 

#endif