#include<iostream>
using namespace std;


int main()
{
    int sum(int = 0, int = 100);//function header

    cout << "Calling function with no argument" << endl;
    cout << "Sum = " << sum() << endl; // function call

    cout << "Calling function with 1 argument passing" << endl;
    cout << "Sum = " << sum(20) << endl;

    cout << "Calling function with 2 argument passing" << endl;
    cout << "Sum = " << sum(1,2) << endl;

    return 0;
}
int sum(int a, int b)//function definition
{
    cout << "Fist = " << a << endl;
    cout << "Second = " << b << endl;

    return a+b;
}