#include"p1.h"
#include<iostream>
using namespace std;
class p1 :public iTax
{
private:
    double s, t;

public:
    double sal, tax;
    p1()
    {
    }
    void getz()
    {
        cout << "Enter your salary in a year: ";
        cin >> sal;
        s = sal;
    }
    void print1()
    {
        cout << "You have no income tax.\n";
    }
    void showz()
    {
        sal = s;
        cout << "\nSalary  : " << " tk. in a year" << sal;
        cout << "\nTax     : 0 tk.";
    }
};
