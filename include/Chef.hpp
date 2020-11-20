#ifndef CHEF_HPP
#define CHEF_HPP

#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <iostream>
#include <cstdlib> //Für zufällige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"

class Chef : public Stage{
    public: 
        Chef(); 
        bool specificRun(); 

}; 

Chef::Chef()
{
    this -> id = "7";
    this->name = "Mail vom Chef"; 
    this->description = "Du erhaeltst eine Top Secret Mail von deinem Chef, der dich bittet sofort und diskret 10.000 EUR an euren Partner zu ueberweisen.";
    this->description2 = "Was tust du?";
    this->toPass = false;  
}

bool Chef::specificRun()
{
    return true;
}
#endif