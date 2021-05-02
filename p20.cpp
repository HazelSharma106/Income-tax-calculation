#include"p20.h"
#include<iostream>
using namespace std;
class p20 :public iTax
{
public:
    double sal, tax;
    p20() // default constructor
    {
    }
    void getty() // entering of data
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal * (.20);
    }
    void print3() // printing of data
    {

        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void showty() // showing of data
    {
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : " << tax << " tk." << "\n\n";
    }
};
