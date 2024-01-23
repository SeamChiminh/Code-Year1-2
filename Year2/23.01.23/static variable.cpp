#include<iostream>
using namespace std;
//statinc variable គឺវារក្សាតម្លៃរបស់វានៅពេលធ្វើការអ្វីមួយ មិនមករកតម្លៃ default វាវិញទេ។
void abc()
{
    static int x = 10, y = 20;
    x++;
    y++;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    cout << "X + Y = " << (x+y) << endl;

}

int main()
{

    cout << "First call to function abc()" << endl;
    abc();

    cout << "Second call to function abc()" << endl;
    abc();

    cout << "Third call to function abc()" << endl;
    abc();

    return 0;
}