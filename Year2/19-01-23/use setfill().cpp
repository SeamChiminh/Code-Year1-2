#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    cout << setfill('*'); // មានន័យថា វានឹងបង្ហាញ​​ (*)​ នៅចន្លោះកន្លែងមាន setw;
    cout <<"ABC" << setw(6) << 12 << "DEF";
    
    return 0;
}