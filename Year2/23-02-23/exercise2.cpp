#include<iostream>
#include<conio.h>
using namespace std;
//sum = 1! + 2! + 3!+ ....+ n!
int sum(int n)
{
    int s = 0;
    int p = 1;

    for(int i = 1; i<=n; i++)
    {
        p = p*i;
        s = s+p;
    }
    return s;
}

int main()
{
    int n;

    cout << "input n: ";
    cin >> n;
    cout << "This is values = " << sum(n) << endl;

    getch();
    return 0;
}