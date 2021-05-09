#include"getshow.h"
#include<iostream>
using namespace std;
    void getshow::getit(const char* a)
    {
        b = *a;
        cout << "enter a name:";
        cin >> name;
        cout << "enter a ID";
        cin >> ID;
    }
    void getshow:: showit()
    {
        cout << "\nName    : " << name;
        cout << "\nOccupation :" << b;
        cout << "\nID No.  : " << ID;
    }
