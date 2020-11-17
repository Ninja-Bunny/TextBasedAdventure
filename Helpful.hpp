#ifndef HELPFUL_HPP
#define HELPFUL_HPP

#ifdef _WIN32
    #include <Windows.h>
#else
    #include <unistd.h>
#endif

#include <string>
#include <iostream>
#include <algorithm>

using namespace std; 

class Helpful 
{
   public: 
   void slowPrinting(string s);  
}; 

void Helpful::slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << flush; 
        usleep(10000);  
    }
     cout << endl; 

}



#endif