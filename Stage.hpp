#ifndef STAGE_HPP
#define STAGE_HPP


#include <iostream>
#include <string> 
#include "stageMethods.hpp"
#include "Helpful.hpp"

using namespace std; 

class Stage
{
    public: 
        Stage(string id, string name, string description, string question, string toPass); 
        bool run(); 
        string getID(); 
        string getName(); 
        string getDescription(); 
        string getQuestion(); 
        string getNext();
        bool toPass;
    private: 
        string id;  //stageID
        string name; //stageName
        string description; //shortTest
        string question; //Question to Answer
         //Muss das Fach bestanden werden? 
        bool passed; 
}; 

Stage::Stage(string id, string name, string description, string question, string toPass)
{
    //Konstruktor
    this->id = id; 
    this->name = name; 
    this->description = description; 
    this-> question = question; 
    this->toPass = stoi(toPass); //in txt file wird übergeben, ob man bestehen muss, oder nicht, umwandeln in int, damit man 1, oder 0 an bool übergeben kann
    passed = false; 

}
bool Stage::run()
{
    bool good = false; 
    hyphens(name); //Trennstriche
    slowPrinting("|| " + name + " ||"); //Überschrift bzw. Name der Stage
    hyphens(name);
    slowPrinting(description); 
    slowPrinting(question); 
    cout << endl; 
    
    if (this->name == "Assessment Center")
    {
        good = assessment();
        
        /*if (good) //fixed :) 
        {
            cout << endl << "success" << endl;
        }
        else if (!good) {
            cout << endl << "fail" << endl;
        }
        else 
        {
            cout << "error!";
        }*/
        return good; 
    } 
    else if (this->name == "Beginn Semester")
    {

    } 
    else if (this->name == "Mathe")
    {
        
    } 
    else if (this->name == "C++")
    {
        
    } 
    else if (this->name == "Englisch")
    {
        
    } 
    else if (this->name == "Betriebssysteme")
    {
        betriebssysteme(); 
    } 
    else if (this->name == "Informatik")
    {
        
    } 
    else if (this->name == "Mail vom Chef")
    {
        
    } 
    else if (this->name == "Auswertung der Klausuren")
    {

    } 
    else 
    {
        cout << "error" << endl;  
    }
}
string Stage::getID()
{
    return id; 
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
string Stage::getNext()
{
    int i = stoi(id);
    ++i;
    string s = to_string(i);
    return s;
}


#endif


