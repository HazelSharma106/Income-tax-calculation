#include"p1.h"
#include<iostream>
using namespace std;;
    void p1::getz()
    {
        cout << "Enter your salary in a year: ";
        cin >> sal;
        cout << "You have no income tax.\n";
    }
    void p1::showz()
    {
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : 0 tk.";
    }
