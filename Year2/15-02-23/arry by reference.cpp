#include<iostream>
#include<conio.h>
using namespace std;
//array call by reference

void addarray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i] += 2;
    }
}
int main()
{
    int x[20],n;
    cout << "input n : ";
    cin >> n;
    
    for (int i = 0; i<n; i++)
    {
        cout << "x[" << i << "]";
        cin >> x[i];
    }
    cout << "output before call :";
    for(int i=0; i<n; i++)
    {
        cout << x[i] << "\t";
    }
    cout << endl;
    addarray(x,n);
    cout << "output after call :";
    for(int i=0; i<n; i++)
    {
        cout << x[i] << "\t";
    }
    getch();
    return 0;
}