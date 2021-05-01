#ifndef iTax_H
#define iTax_H
#include <iostream>
using namespace std;
class iTax
{
public:
    char* name = new char[90];
    char* ads = new char[90];
    char* occ = new char[90];
    int ID;
    virtual void getit(char* a);
    virtual void showit();
}; 
#endif
