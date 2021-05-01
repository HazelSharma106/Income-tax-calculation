#include"common.h"
#include<iostream>
using namespace std;
class common :public iTax

{
public:
    double sal, tax;

    void operator*()
    {

        cout << "How much you earn in a year: ";
        cin >> sal;
        if (sal < 50000)
        {
            tax = sal * (.03);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 50000) && (sal <= 100000))
        {
            tax = sal * (.07);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 100000) && (sal <= 150000))
        {
            tax = sal * (.10);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 150000) && (sal <= 200000))
        {
            tax = sal * (.15);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 200000) && (sal <= 250000))
        {
            tax = sal * (.20);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 250000) && (sal <= 300000))
        {
            tax = sal * (.23);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if (sal > 300000)
        {
            tax = sal * (.25);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
    }


    void showc()
    {
        cout << "\nSalary  : " << sal << " tk. in a year";
        cout << "\nTax     : " << tax << " tk." << "\n\n";

    }

};
