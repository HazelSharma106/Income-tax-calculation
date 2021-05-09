#include"p25.h"
#include<iostream>
using namespace std;



    void p25::gettf()
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        tax = sal + (25000000);
        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void p25::showtf()
    {
        cout << "\nSalary      : " << " tk. in a year" << sal;
        cout << "\nTax         : " << tax << " tk." << "\n\n";
    }
class greeting //polymorphism
{
    void show()
    {
        cout << "welcome" << endl; // show function is overloaded
    }
    void show(int a)
    {
        cout << "thank you" << endl;
    }
};
