#include<iostream>
#include<conio.h>
using namespace std;

void menu()
{
    cout << "===========MENU===========" << endl;
    cout << "1. Calculate Sum 2 Number" << endl;
    cout << "2. Calculate Sub 2 Number" << endl;
    cout << "3. Calculate Multi 2 Number" << endl;
    cout << "4. Calculate Divi 2 Number" << endl;
} 

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int main()
{
    int choice;
    A:
    menu();
    cout << "Please choose : ";
    cin >> choice;

    switch(choice)
    {
        case 1: 
                int a,b;
                cout << "========Sum 2 Number==========" << endl;
                cout << "input a : ";
                cin >> a;
                cout << "input b : ";
                cin >> b;
                cout << "The Value is = " << sum(a,b) << endl;
                getch();
                goto A;
                break;
        case 2:
                int c,e;
                cout << "========Sub 2 Number==========" << endl;
                cout << "input c : ";
                cin >> c;
                cout << "input e : ";
                cin >> e;
                cout << "the value is = " << sub(c,e) << endl;
                getch();
                goto A;
                break;
        case 3: 
                int d,f;
                cout << "========Multi 2 Number=========" << endl;
                cout << "input d : ";
                cin >> d;
                cout << "input f : ";
                cin >> f;
                cout << "the value is = " << multi(d,f) << endl;
                getch();
                goto A;
                break;
        case 4:
                int g,h;
                cout << "=========Divi 2 Number=========" << endl;
                cout << "input g : ";
                cin >> g;
                cout << "input h : ";
                cin >> h;
                cout << "the value is = " << divi(g,h) << endl;
                getch();
                goto A;
                break;
        case 5:
                cout << "Thanks for using" << endl;
                getch();
                exit (0);
        default: 
                cout << "Please enter again." << endl;
                getch();
                goto A;


    }

    return 0;
}