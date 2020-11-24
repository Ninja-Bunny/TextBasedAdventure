#include "../include/Stage.hpp"

using namespace std; 


Stage::Stage()
{
    //do nothing; 
}

Stage::~Stage()
{
    
}

void Stage::run()
{
    cout << termcolor::cyan;
    clearScreen();
    bool good = false; 
    int sID = this->id; 
    cout << endl; 
    hyphens(name); //Trennstriche
    slowPrinting("|| " + name + " ||"); //Ueberschrift bzw. Name der Stage
    hyphens(name);
    slowPrinting(description); 
    slowPrinting(description2); 
    cout << endl; 

}
int Stage::getID()
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
int Stage::getNext()
{
    int i = id;
    ++i;
    return i;
}