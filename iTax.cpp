#include"iTax.h"
#include<iostream>
using namespace std;
class iTax
{
public:
    char* name = new char[90];

    char* occ = new char[90];

    int ID;

    virtual void getit(const char* a)
    {
        strcpy(occ, a);
        cout << "Enter your name: ";
        gets_s(name);
        cout << "Enter your ID: ";
        cin >> ID;
    }

    virtual void showit()
    {

        cout << "\nName    : " << name;
        cout << "\nOccupation :" << occ;
        cout << "\nID No.  : " << ID;
    }
};  //end of base class
