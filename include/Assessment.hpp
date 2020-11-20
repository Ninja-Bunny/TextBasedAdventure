#ifndef ASSESSMENT_HPP
#define ASSESSMENT_HPP

#pragma once
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/Stage.hpp"
#include "../include/termcolor.hpp"

class Assessment : public Stage{
    public: 
        Assessment(); 
        bool specificRun(); 

}; 

#endif