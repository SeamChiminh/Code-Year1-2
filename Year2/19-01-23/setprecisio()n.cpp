#include<iostream>
#include<iomanip>
using namespace std;
//setprecisio() ប្រើសម្រាប់កំនត់ចំនួនខ្ទង់ក្រោយក្បៀសរបស់ float។​
//ដោយតម្លៃ default នៃ setprecisio = 6ខ្ទង់
int main()
{
    float y = 5/3.0;

    cout << "The values" << endl;
    cout << setprecision(1) << y << endl;
    cout << setprecision(2) << y << endl; 
    cout << setprecision(3) << y << endl;
    cout << setprecision(4) << y << endl;
    cout << setprecision(6) << y << endl;
    
    
    return 0;
}