#ifndef common_h
#define common_h
#include<iostream>
using namespace std;
#include "getshow.h"
class common :public getshow//abstraction

{
public:
    double sal, tax;
    void calculate();



        void show();
  

};
#endif
