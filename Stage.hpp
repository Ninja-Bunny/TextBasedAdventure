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
        Stage(); 
        void run(); 
        string getID(); 
        string getName(); 
        string getDescription(); 
        string getDescription2(); 
        string getNext(); //Muss das Fach bestanden werden? 
        virtual bool specificRun() = 0; //virtual, damit die derived classes aufgerufen werden. = 0 weil? i dunno? aber es geht
        bool toPass;

    protected: 
        string id;  //stageID
        string name; //stageName
        string description; //shortTest
        string description2; //Question to Answer
        bool passed; 
}; 

Stage::Stage()
{
    //do nothing; 
}

void Stage::run()
{
    bool good = false; 
    int sID = stoi(this->id); 
    cout << endl; 
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


