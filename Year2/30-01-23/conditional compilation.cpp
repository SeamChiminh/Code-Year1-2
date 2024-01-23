#include<iostream>
using namespace std;
//#if ... #endif = ប្រើសម្រាប់កំនត់ថា source lines ខ្លះត្រូវ compile ឬមិន compile។

int main()
{
    #if 3
    int a;
    cout << "Hello\n";
    cin >> a;
    #endif
}

