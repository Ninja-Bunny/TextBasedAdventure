#include "../include/Stage.hpp"

using namespace std; 


Stage::Stage()
{
    //do nothing; 
}

void Stage::run()
{
    cout << termcolor::cyan;
    clearScreen();
    bool good = false; 
    int sID = stoi(this->id); 
    cout << endl; 
    hyphens(name); //Trennstriche
    slowPrinting("|| " + name + " ||"); //ueberschrift bzw. Name der Stage
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