#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Rectangle
{
    private:
        float L;
        float W;
    public:
        void input();
        void output()
        {
            cout << "definition function in class " << endl;
            cout << "Values length = " << L << endl;
            cout << "Values width  = " << W << endl;
            cout << "==================" << endl;
        }
        float Area();
        void output_list();
        float Getlength()
        {
            return L;
        }
        float Getwidth();
        void Setwidth(float y)
        {
            W = y;
        }
        void Setlength(float x);
        void Setdata(float x, float y);
         
};
void Rectangle::output_list()
{
    cout << endl << setprecision(3) << setw(7) << L;
    cout << setprecision(3) << setw(7) << W;
    cout << setprecision(3) << setw(9) << Area() << endl;

}
float Rectangle::Getwidth()
{
    return W;
}
void Rectangle::Setlength(float x)
{
    L = x;
}
void Rectangle::Setdata(float x,float y)
{
    L = x;
    W = y;
}
void Rectangle::input()
{
    cout << "Enter Length of Rectangle = ";
    cin >> L;
    cout << "Enter Width of Rectangle  = ";
    cin >> W;
}
float Rectangle::Area()
{
    float A;
    A = L * W;
    return (A);
}
int main()
{
    Rectangle r;
    float result;
    cout << "============================================" << endl;
    cout << "Pratice with OOP in C++ programming language" << endl;
    cout << "============================================" << endl;
    cout << "1. input data of Rectangle from keyboard : " << endl;
    r.input();
    cout << endl << endl;

    cout << "=====================================" << endl;
    cout << "2. Output data of Rectangle on screen " << endl;
    cout << "=====================================" << endl;
    cout << "Area of ractangle = " << r.Area() << endl;
    cout << "=====================================" << endl;

    
    cout << "==================" << endl;
    cout << "Use array of class " << endl;
    cout << "==================" << endl;
    cout << endl << endl;

    Rectangle a[100];
    int n;
    cout << "=============================" << endl;
    cout << "1. Create list of ractangle" << endl;
    cout << "=============================" << endl;
    cout << "Input n: ";
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cout << "enter object " << i + 1 << ": " << endl;
        a[i].input();
    }
    cout << "=====================================" << endl;

    cout << endl << endl;
    cout << "=============================" << endl;
    cout << "2. output list of ractangle" << endl;
    cout << "=============================" << endl;

    cout << left;
    cout << "=====================================================" << endl;
    cout << left;
    cout << setw(7) << "Leght" << setw(7) << "Width" << setw(7) << "Area of ractangle" << endl;
    cout << "=====================================================" << endl;
    for(int i=0; i<n; i++)
    {
        a[i].output_list();
    }
    cout << "=====================================" << endl;

    cout << endl << endl;
    cout << "=============================" << endl;
    cout << "3. Sort list of ractangle" << endl;
    cout << "=============================" << endl;
    Rectangle tmp;
    for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
    {
        if(a[i].Area() > a[j].Area())
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    cout << "=============================" << endl;
    cout << "After sort array of ractangle" << endl;
    cout << "=============================" << endl;
    cout << endl;
    cout << left;
    cout << setw(7) << "Lenght" << setw(7) << "width" << setw(7) << "area" << endl;
    for(int i=0; i<n; i++)
    {
        a[i].output_list();
    }
    cout << "=====================================" << endl;


    getch();
    return 0;
}