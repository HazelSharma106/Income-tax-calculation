#ifndef p25_h
#define p25_h
#include<iostream>
using namespace std;
#include"getshow.h"
class p25 :public getshow //abstraction
{
public:
    double sal, tax;


    void gettf();
    void showtf();

};
#endif
