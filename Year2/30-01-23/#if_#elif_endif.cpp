#include<iostream>
using namespace std;
//#if...#elif...#endif = ប្រើសម្រាប់អនុវត្តន៍ទម្រង់ multiple conditions ក្នុង conditions compilation។
int main()
{
    #define test 5
    #define me 10

    #if test == 10
        cout << "group of lines1 was compied.\n";
    #elif me == 10
        cout << "group of lines2 was compiled.\n";
    #endif


    return 0;
}