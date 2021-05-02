#include<iostream>
#include<cstring>// for using the strcpy function
#include<conio.h> // The conio. h is a non-standard header file used in C and C++ programming
#include<cstdio> // Stdio. h stands for Standard Input Output
#include <malloc.h> //The malloc () function in C++ allocates a block of uninitialized memory and returns a void pointer to the first byte of the allocated memory block if the allocation succeeds. 
#include <wchar.h> // The standard header <wchar. h> is included to perform input and output operations on wide streams. It can also be used to manipulate the wide strings.
#define MAX_SIZE 41804 // It is use to give maximum size of default array
#define _CRT_SECURE_NO_WARNINGS //To disable the warnings
# define getch() // – It is a library that is used to import the get function
using namespace std;
using std::cout;
using std::cin;

//==========================Base Class========================//

class iTax
{
public:
    char* name = new char[90];

    char* occ = new char[90];

    int ID;

    virtual void getit(const char* a)
    {
        strcpy(occ, a);
        cout << "Enter your name: ";
        gets_s(name);
        cout << "Enter your ID: ";
        cin >> ID;
    }

    virtual void showit()
    {

        cout << "\nName    : " << name;
        cout << "\nOccupation :" << occ;
        cout << "\nID No.  : " << ID;
    }
};  //end of base class


//=================================================================//

class common :public iTax

{
public:
    double sal,tax;

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

//=========================================================//

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

//============================================================//

class p15 :public iTax
{
private :
    double s, t;
public:
    double sal, tax;
    p15()
    {

    }
    double getfn()
    {

        cout << "Enter salary in a year: ";
        cin >> sal;
        s=sal;
        t = sal * (.15);
 
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


//===========================================================//

class p20 :public iTax
{
private:
    double s, t;
public:
    double sal, tax;
    p20()
    {
    }
   void getty()
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        s=sal;
        t = sal * (.20);
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


//==============================================================//

class p25 :public iTax
{
private:
    double s, t;

public:
    double sal,tax;
    p15()
    {
    }
    void gettf()
    {
        cout << "Enter salary in a year: ";
        cin >> sal;
        t= sal * (.25);
        s = sal;

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


//=======================Main Function=======================//

int main()
{
    common* c;
    c = new common[60]; // creation of pointers for the class
    p1* z;
    z = new p1[20];
    p15* fn;
    fn = new p15[20];
    p20* ty;
    ty = new p20[20];
    p25* tf;
    tf = new p25[20];
    iTax it;

    int i, j, index, ID;
    char* a = new char[70];

    do
    {
        cout << "\t\t\t    INCOME TAX CALCULATION"
            << "\n\nWhat do you want to do?\n1.Asking for IncomeTax view."
            << "\n2.Search\n3.Exit.\n"
            << "\nMake your choice= ";
        cin >> index;

        switch (index)
        {

        case 1:
            cout << "\nHow many members ?  ";
            cin >> j;
            if (j == 0)
                cout << "Please enter a valid number.\n\n";

            for (i = 1; i <= j; i++)
            {
                cout << "\nEnter occupation name: ";
                cin >> a;

                if ((strcmp(a, "farmer") == 0) || (strcmp(a, "student") == 0))
                {
                    z[i].getit(a);
                    z[i].getz();
                    z[i].print1();
                }

                else if (strcmp(a, "business") == 0)
                {
                    ty[i].getit(a);
                    ty[i].getty();
                    ty[i].print3();
                }
                else if (strcmp(a, "export") == 0)
                {
                    tf[i].getit(a);
                    tf[i].gettf();
                    tf[i].print4();
                }
                else  if (strcmp(a, "engineer") == 0)
                {
                    fn[i].getit(a);
                    fn[i].getfn();
                    fn[i].print2();
                }
                else
                {
                    c[i].getit(a);
                    c[i].operator*();
                }
            }
            break;


        case 2:
            cout << "\nGive ur employee ID=";
            cin >> ID;

            if ((ID != c[i].ID) && (ID != z[i].ID) && (ID != fn[i].ID) && (ID != ty[i].ID) && (ID != tf[i].ID))
            {
                cout << "No match found.....\n\n";
            }


            for (i = 1; i <= j; i++)

            {
                if (ID == c[i].ID)
                {
                    c[i].showit();
                    c[i].showc();
                    cout << "Press any key.......\n\n";
                    cin.get();
                }

                if (ID == z[i].ID)
                {
                    z[i].showit();
                    z[i].showz();
                    cout << "Press any key.......\n\n";
                    cin.get();
                }

                if (ID == fn[i].ID)
                {
                    fn[i].showit();
                    fn[i].showfn();
                    cout << "Press any key.......\n\n";
                    cin.get();
                }

                if (ID == ty[i].ID)
                {
                    ty[i].showit();
                    ty[i].showty();
                    cout << "Press any key.......\n\n";
                    cin.get();
                }

                if (ID == tf[i].ID)
                {
                    tf[i].showit();
                    tf[i].showtf();
                    cout << "Press any key.......\n\n";
                    cin.get();
                }
            }
            break;




        case 3:
            break;
        default:
            cout << "\n\a\nWrong choice Try again...";
            cout << "\nPress any key to return to main menu...";
            cin.get();
            break;
        }



    } while (index != 3);
    return 0;
}
