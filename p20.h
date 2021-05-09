#ifndef p20_h
#define p20_h
#include<iostream>
using namespace std;
#include"getshow.h"
class p20 :public getshow // abstraction
{

public:
    double sal, tax;


    void getty();
    p20 operator+(const p20& q); // operator overloading
   
    void showty();
};
#endif

