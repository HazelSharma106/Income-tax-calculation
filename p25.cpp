#include"p25.h"
#include<iostream>
using namespace std;
class p25 :public iTax
{
private:
    double s, t;

public:
    double sal, tax;
    p25() // default constructor
    {

    }
    void gettf()
    {
        cout << "Enter salary in a year: "; // enetering of data
        cin >> sal;
        tax = sal * (.25);
        s = sal;
        t = tax;

    }

    void print4() // printing of data
    {
        cout << "The income tax is: " << tax << "tk." << endl;
    }
    void showtf() // showing of data
    {
        cout << "\nSalary      : " << " tk. in a year" << sal;
        cout << "\nTax         : " << tax << " tk." << "\n\n";
    }
};
