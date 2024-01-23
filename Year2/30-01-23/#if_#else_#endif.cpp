#include<iostream>
using namespace std;
//#if...#else...#endif = ប្រើសម្រាប់កំនត់ថា source lines ខ្លះត្រូវ compile ឬsource lines 
//ផ្នែកផ្សេងទៀតត្រូវ compile ជំនួសវិញ។

int main()
{
    #define max 4 

    #if max == 4
        cout << "This line was compiled.\n";
    #else   
        cout << "another statement was compiled.\n";
    #endif

    return 0;
}