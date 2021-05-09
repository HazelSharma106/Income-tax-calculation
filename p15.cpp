#include"p15.h"
#include<iostream>
using namespace std;


    void p15:: getfn()
    {

        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal + (150000);
    }
    p15 p15::operator+(const p15& p) // operator overloading
    {
        
        p15 P;
        P.tax = this->tax + p.tax;
        cout << "The income tax is: " << tax << "tk." << endl; \
        return P;
    }
    void p15:: showfn()
    {
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : " << tax << " tk." << "\n\n";
    }
