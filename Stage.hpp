#ifndef STAGE_HPP
#define STAGE_HPP
#endif

#include <iostream>
#include <string> 
using namespace std; 

class Stage
{
    public: 
        Stage(string id, string name, string description); 

    private: 
        string id; 
        string name; 
        string description; 
        string choices[5]; 
}; 

Stage::Stage(string id, string name, string description)
{

}


