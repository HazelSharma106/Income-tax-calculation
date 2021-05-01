#include"p20.h"
#include<iostream>
using namespace std;
class p20 :public iTax
{
public:
    double sal, tax;
    p20()
    {
    }
    void getty()
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal * (.20);
    }
    void print3()
    {

        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void showty()
    {
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : " << tax << " tk." << "\n\n";
    }
};
