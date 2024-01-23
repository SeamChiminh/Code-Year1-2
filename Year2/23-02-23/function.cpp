#include<iostream>
#include<conio.h>
using namespace std;

//recursive function
int min2(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    return min2(b,a);
}

int max2(int a, int b)
{
    if(a<b)
        return b;
    return a;
}

int max(int a, int b)
{
    int max = a;
    if (max < b)
        max = b;
    return max;
}

int min3(int a, int b, int c)
{
    int min = a;
    if(min > b)
    {
        min = b;
    }
    if(min > c)
    {
        min = c;
    }
    return min;   
}

int main()
{
    int x,y,m;

    cout << "input x : ";
    cin >> x;
    cout << "input y : ";
    cin >> y;
    cout << "input m : ";
    cin >> m;
    cout << min3(x,y,m);
    getch();
    return 0;
}