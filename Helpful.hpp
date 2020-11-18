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

/*class Helpful 
{
   public: 
   void slowPrinting(string s);  
   void clearScreen(); 
}; */

void slowPrinting(string s)
{
    for (int i = 0; i < s.size(); i++) { 
        cout << s[i] << flush; //char by char output, flush to clear 
        usleep(10000);  //thread (?) sleeps for 10k Milliseconds -> we can change that accordingly 
    }
     cout << endl; 

}

void clearScreen()
{
    #ifdef _WIN32
        system("CLS");
    #else 
        system("clear");
    #endif
}



#endif