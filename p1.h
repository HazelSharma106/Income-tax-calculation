#ifndef p1_h
#define p1_h
#include<iostream>
using namespace std;
#include"getshow.h"
class p1 :public getshow// abstraction
{
public:
    double sal, tax;
    void getz();
    void showz();
};
#endif
