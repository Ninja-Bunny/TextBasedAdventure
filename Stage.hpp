#ifndef STAGE_HPP
#define STAGE_HPP


#include <iostream>
#include <string> 
#include "Betriebssysteme.hpp"
using namespace std; 

class Stage
{
    public: 
        Stage(string id, string name, string description, string question); 
        void run(); 
        string getName(); 
        string getDescription(); 
        string getQuestion(); 

    private: 
        string id;  //stageID
        string name; //stageName
        string description; //shortTest
        string question; //Question to Answer
}; 

Stage::Stage(string id, string name, string description, string question)
{
    //Konstruktor
 this->id = id; 
 this->name = name; 
 this->description = description; 
 this-> question = question; 

}
void Stage::run()
{
    slowPrinting(name); 
    slowPrinting(description); 
    slowPrinting(question); 
    
    if (this->name == "Assessment Center")
    {

    } else if (this->name == "Beginn Semester")
    {

    } else if (this->name == "Mathe")
    {
        
    } else if (this->name == "C++")
    {
        
    } else if (this->name == "Englisch")
    {
        
    } else if (this->name == "Betriebssysteme")
    {
        bs(); 
    } else if (this->name == "Informatik")
    {
        
    } else if (this->name == "Mail vom Chef")
    {
        
    } else if (this->name == "Auswertung der Klausuren")
    {

    } else 
    {
        cout << "error" << endl;  
    }
}

string Stage::getName()
{
    return name; 
} 
string Stage::getDescription()
{
    return description; 
} 
string Stage::getQuestion()
{
    return question; 
}


#endif


