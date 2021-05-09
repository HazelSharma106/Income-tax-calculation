#ifndef p15_h
#define p15_h
#include<iostream>
using namespace std;
#include"getshow.h"
class p15 :public getshow  // abstraction
{
public:
    double sal, tax;

    void getfn();
    p15 operator+(const p15& p);// operator overloading
        void showfn();
};
#endif
