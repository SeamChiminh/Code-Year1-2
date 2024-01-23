#include<iostream>
#include<iomanip>
using namespace std;
//fill() = ប្រើកំនត់តួអក្សរសម្រាប់បំពេញនៅក្នុង unused field width 
int main()
{
    cout << "Start";
    cout.fill('*');//បង្ហាញ * នៅកន្លែងដែល width(10)
    cout.width(10);
    cout << "Data" << "End" << endl;

    return 0;
}