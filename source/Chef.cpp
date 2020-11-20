#include "../include/Stage.hpp"
#include "../include/Chef.hpp"


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
    cout << termcolor::magenta;
    return true;
}