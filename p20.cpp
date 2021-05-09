#include"p20.h"
#include<iostream>
using namespace std;

    


    void p20::getty()
    {

        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal + (20000);
    }
    p20 p20:: operator+(const p20& q) // operator overloading
    {
        p20 Q;
        Q.tax = this->tax + q.tax;
        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void p20::showty()
    {
        showit();
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : " << tax << " tk." << "\n\n";
    }
