#include<iostream>
using namespace std;
//use reference to parameter = ដោយ​ share នូវ reference address របស់ actual argument
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 12, b = 6;

    cout << "======= Before swap =======" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a,b);
    cout << "====== After swapping =======" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}