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
        Stage(string id, string name, string description, string description2, string toPass); 
        Stage(); 
        bool run(); 
        string getID(); 
        string getName(); 
        string getDescription(); 
        string getDescription2(); 
        string getNext();
        bool specificRun(); 
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
bool Stage::run()
{
    bool good = false; 
    int sID = stoi(this->id); 
    hyphens(name); //Trennstriche
    slowPrinting("|| " + name + " ||"); //Überschrift bzw. Name der Stage
    hyphens(name);
    slowPrinting(description); 
    slowPrinting(description2); 
    cout << endl; 

    /*switch(sID)
    {
        case 0:
            return specificRun(); 
            break; 
        case 1:
            return true; //?? Beginn Semester
            break; 
        case 2: 
            return mathe(); 
            break; 
        case 3: 
            return programmieren(); 
            break; 
        case 4: 
            return englisch(); 
            break; 
        case 5: 
            return betriebssysteme(); 
            break; 
        case 6: 
            return informatik(); 
            break; 
        case 7: 
            return chef(); 
            break; 
        case 8: 
            return auswertung(); 
    }
    return false; */
    
    /*if (this->name == "Assessment Center")
    {
        good = assessment();
        
        if (good) //fixed :) 
        {
            cout << endl << "success" << endl;
        }
        else if (!good) {
            cout << endl << "fail" << endl;
        }
        else 
        {
            cout << "error!";
        }
        return good; 
    } 
    else if (this->name == "Beginn Semester")
    {
        return true;
    } 
    else if (this->name == "Mathe")
    {
        return true;
    } 
    else if (this->name == "C++")
    {
        return true;
    } 
    else if (this->name == "Englisch")
    {
        return true;
    } 
    else if (this->name == "Betriebssysteme")
    {
        betriebssysteme(); 
        return true;
    } 
    else if (this->name == "Informatik")
    {
        return true;
    } 
    else if (this->name == "Mail vom Chef")
    {
        return true;
    } 
    else if (this->name == "Auswertung der Klausuren")
    {
        return true;
    } 
    else 
    {
        cout << "error" << endl;  
        return false; 
    }*/
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

bool Stage::specificRun()
{
    //literally do nothing
    return true; 
}


#endif


