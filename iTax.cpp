#include"iTax.h"
#include<iostream>
using namespace std;
class iTax
{
public:
    char* name = new char[90]; //memory allocation 

    char* occ = new char[90]; //memory allocation

    int ID;

    virtual void getit(const char* a) // passing a pointer
    {
        strcpy(occ, a); //  Strcpy -It is used to copy one string to another. In C language
        cout << "Enter your name: ";
        gets_s(name); // gets - The gets() function reads characters from stdin and stores them in str until a newline character or end of file is found
        cout << "Enter your ID: ";
        cin >> ID;
    }

    virtual void showit() // showing of the data
    {

        cout << "\nName    : " << name;
        cout << "\nOccupation :" << occ;
        cout << "\nID No.  : " << ID;
    }
};  //end of base class
