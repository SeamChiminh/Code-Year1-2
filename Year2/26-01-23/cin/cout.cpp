#include<iostream>
using namespace std;

int main()
{
    int x,y;
    char z;

    cout << "Input x = " ;
    cin >> x;

    cout << "Input y = ";
    cin >> y;

    cout << "Input z = ";
    cin >> z;

    while(cin.get() != '\n');

    cout << "Press enter : ";
    cin.get();

    cout << "x = " << x << ",y = " << y << " And z = " << z << endl;
    
    return 0;
}