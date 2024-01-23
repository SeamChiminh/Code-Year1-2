#include<iostream>
#include<iomanip>
using namespace std;
//width() = ប្រើសម្រាប់កំនត់ចំនួនតួអក្សរសម្រាប់ field width របស់ output data ។
int main()
{
    cout << "Start";
    cout.width(10);//បង្ហាញspace
    cout << "Testing"<< endl;

    return 0;
}