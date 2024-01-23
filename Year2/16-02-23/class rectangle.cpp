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
    cout << setprecision(3) << setw(7) << W << endl;
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

    cout << "Pratice with OOP in C++ programming language" << endl;
    cout << "1. input data of Rectangle from keyboard : " << endl;
    r.input();

    cout << "2. Output data of Rectangle on screen " << endl;
    r.output();
    result = r.Area();
    cout << "Value Area of Rectangle = ";
    cout.width(7); cout.setf(ios::fixed);
    cout << setw(7) << setprecision(4) << result << endl;


    getch();
    return 0;
}