#ifndef iTax_h
#define iTax_h
#include <iostream>
using namespace std;
class iTax
{
protected:             // public and protected class
    char* name = new char[90];
    char* occ = new char[90];
public:
    int ID;
    virtual void getit() = 0; 
    virtual void showit() = 0;
};
#endif
