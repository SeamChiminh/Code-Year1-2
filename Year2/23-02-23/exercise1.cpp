#include<iostream>
#include<conio.h>
using namespace std;
//sum = 1+2+3+...+n
void sum()
{
    int n,value;

    cout << "input n : ";
    cin >> n;

    for(int i = 1; i<=n; i++)
        {
            value = value + i;
        }
    cout << "values = " << value << endl;
}

void multi()
{
    int n, a=1;
    cout << "input n : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        a = a * i;
    }

    cout << "the values = " << a << endl;
}

int main()
{
    sum();
    multi();
    getch();
    return 0;
}