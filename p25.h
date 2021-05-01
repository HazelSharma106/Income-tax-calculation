#include"p25.h"
#include<iostream>
using namespace std;
class p25 :public iTax
{
private:
    double s, t;

public:
    double sal, tax;

    void gettf()
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal * (.25);
        s = sal;
        t = tax;

    }

    void print4()
    {
        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void showtf()
    {
        cout << "\nSalary      : " << " tk. in a year" << sal;
        cout << "\nTax         : " << tax << " tk." << "\n\n";
    }
};
