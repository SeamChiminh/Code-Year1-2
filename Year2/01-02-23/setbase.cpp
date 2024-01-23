#include<iostream>
#include<iomanip>
using namespace std;
//setbase() = ប្រើសម្រាប់បំ​លែងពីប្រព័ន្ធគោលណាមួយ​ ទៅប្រព័ន្ធគោលមួយផ្សេងទៀត។
int main()
{

    int value;

    cout << "enter value = ";
    cin >> value;

    cout << "Decimal base = " << setbase(10) << value << endl;
    cout << "Hexadecimal base = " << setbase(16) << value << endl;
    cout << "Octal base = " << setbase(8) << value << endl;

    return 0;
}