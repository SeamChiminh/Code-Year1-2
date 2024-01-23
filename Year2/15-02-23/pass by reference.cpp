#include<iostream>
#include<conio.h>
using namespace std;

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a, b;

    cout << "input a : ";
    cin >> a;
    cout << "input b : ";
    cin >> b;

    if (a>b){
        swap(a,b);
    }
    cout << "this is a = " << a << ", " << "this is b = " << b << endl;

    getch();
    return 0;
}