#ifndef STAGE_HPP
#define STAGE_HPP


#include <iostream>
#include <string> 
//#include "stageMethods.hpp"
#include "Helpful.hpp"


using namespace std; 

class Stage
{
    public: 
        Stage(string id, string name, string description, string description2, string toPass); 
        Stage(); 
        void run(); 
        string getID(); 
        string getName(); 
        string getDescription(); 
        string getDescription2(); 
        string getNext();
        virtual bool specificRun() = 0; //virtual, damit die derived classes aufgerufen werden. = 0 weil? i dunno? aber es geht

        bool toPass;
    protected: 
        string id;  //stageID
        string name; //stageName
        string description; //shortTest
        string description2; //Question to Answer
         //Muss das Fach bestanden werden? 
        bool passed; 
}; 

Stage::Stage()
{
    //do nothing; 
}

Stage::Stage(string id, string name, string description, string description2, string toPass)
{
    //Konstruktor
    this->id = id; 
    this->name = name; 
    this->description = description; 
    this-> description2 = description2; 
    this->toPass = stoi(toPass); //in txt file wird übergeben, ob man bestehen muss, oder nicht, umwandeln in int, damit man 1, oder 0 an bool übergeben kann
    passed = false; 

}
void Stage::run()
{
    bool good = false; 
    int sID = stoi(this->id); 
    hyphens(name); //Trennstriche
    slowPrinting("|| " + name + " ||"); //Überschrift bzw. Name der Stage
    hyphens(name);
    slowPrinting(description); 
    slowPrinting(description2); 
    cout << endl; 

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
string Stage::getDescription2()
{
    return description2; 
}
string Stage::getNext()
{
    int i = stoi(id);
    ++i;
    string s = to_string(i);
    return s;
}

#endif


