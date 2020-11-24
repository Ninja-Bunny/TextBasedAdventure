#ifndef INFORMATIK_HPP
#define INFORMATIK_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Informatik : public Stage{
    public: 
        Informatik(); 
        ~Informatik(); 
        bool specificRun(); 

}; 


#endif