#ifndef STAGE_HPP
#define STAGE_HPP
#endif

#include <iostream>
#include <string> 
using namespace std; 

class Stage
{
    public: 
        Stage(); 

    private: 
        string id; 
        string name; 
        string description; 
        string neighbour[4]; 
}; 

Stage::Stage()
{

}


