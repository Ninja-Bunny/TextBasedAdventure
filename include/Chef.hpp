#ifndef CHEF_HPP
#define CHEF_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Chef : public Stage{
    public: 
        Chef(); 
        bool specificRun(); 

}; 

#endif