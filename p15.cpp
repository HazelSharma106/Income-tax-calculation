#include"p15.h"
#include<iostream>
using namespace std;
class p15 :public iTax
{
public:
    double sal, tax;
    p15()
    {

    }
    double getfn()
    {

        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal * (.15);

    }
    void print2()
    {
        cout << "The income tax is: " << tax << "tk." << endl;
    }

    void showfn()
    {
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : " << tax << " tk." << "\n\n";
    }
};
