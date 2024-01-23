#include<iostream>
using namespace std;
//ues pointer parameter = ដោយការបញ្ជូន address របស់​ actual argument
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 8, b = 3;
    cout << "======= Before swap =======" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a,&b);
    cout << "====== After swapping =======" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}