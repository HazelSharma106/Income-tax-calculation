#ifndef getshow_h
#define getshow_h
#include<iostream>
using namespace std;
#include"iTax.h"
class getshow :public iTax
{
public:
    string b;
    void getit(const char* a);
    
    void showit();
   
};
#endif
