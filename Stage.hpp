#ifndef STAGE_HPP
#define STAGE_HPP


#include <iostream>
#include <string> 
#include "Betriebssysteme.hpp"
using namespace std; 

class Stage
{
    public: 
        Stage(string id, string name, string description, string question, string choice0, string choice1, string choice2, string choice3, string choice4); 
        void run(); 

    private: 
        string id;  //stageID
        string name; //stageName
        string description; //shortTest
        string question; //Question to Answer
        string choices[5]; //choices
}; 

Stage::Stage(string id, string name, string description, string question, string choice0, string choice1, string choice2, string choice3, string choice4)
{
    //Konstruktor
 this->id = id; 
 this->name = name; 
 this->description = description; 
 this-> question = question; 
 choices[0] = choice0; 
 choices[1] = choice1;
 choices[2] = choice2;
 choices[3] = choice3;
 choices[4] = choice4;

}
void Stage::run()
{
    if (this->name == "Betriebssysteme")
    {
        bs(); 
    }
}


#endif


