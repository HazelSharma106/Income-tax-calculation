#include"common.h"
#include<iostream>
using namespace std;


    void common::calculate()
    {
        if (sal < 50000)
        {
            tax = sal + (3000000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 50000) && (sal <= 100000))
        {
            tax = sal + (700000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 100000) && (sal <= 150000))
        {
            tax = sal + (100000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 150000) && (sal <= 200000))
        {
            tax = sal + (150000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 200000) && (sal <= 250000))
        {
            tax = sal + (200000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if ((sal > 250000) && (sal <= 300000))
        {
            tax = sal + (230000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
        if (sal > 300000)
        {
            tax = sal + (250000);
            cout << "Your IncomeTax is= " << tax << "tk." << endl;
        }
    }


    void common:: show()
    {
       
        cout << "\nSalary  : " << sal << " tk. in a year";
        cout << "\nTax     : " << tax << " tk." << "\n\n";

    }
