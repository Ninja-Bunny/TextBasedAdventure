#ifndef INFORMATIK_HPP
#define INFORMATIK_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Informatik : public Stage{
    public: 
        Informatik(); 
        bool specificRun(); 

}; 


#endif