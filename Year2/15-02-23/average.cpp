#include<iostream>
#include<conio.h>
using namespace std;

float average(float m, float k, float c)
{
    float avg;
    avg = (m+k+c)/3;
    return avg;
}

char grade (float av)
{
    char g;
    if(av < 50)
        g = 'F';
    else if (av < 65)
        g = 'E';
    else if (av <75)
        g = 'D';
    else if (av <85)
        g = 'C';
    else if (av < 95)
        g = 'B';
    else 
        g = 'A';
    return g;
}

float m,e,k,av;
void input ()
{
    cout << "===Input score ===" << endl;
    cout << "input math    = ";
    cin >> m;

    cout << "input english = ";
    cin >> e;

    cout << "input khmer   = ";
    cin >> k;
}
void output ()
{
    cout << "===== This is score =====" << endl;
    cout << "Math    = " << m << endl;
    cout << "English = " << e << endl;
    cout << "Khmer   = " << k << endl;
    av = average(m,k,e);
    cout << "Average = " << av << endl;
    cout << "Grade   = " << grade(av) << endl;   
}
int main()
{
    input();
    output();
    getch();
    return 0;
}