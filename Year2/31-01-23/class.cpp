#include<iostream>
using namespace std;

class TwoNumbers
{
    private:
        float first;
        float second;

    public:
        void assign(float a, float b)
        {
            first = a;
            second = b;
        }
        float getFirst()
        {
            return first;
        }
        float getSecond()
        {
            return second;
        }
        float sum()
        {
            return first + second;
        }
        float sub()
        {
            return first - second;
        }
        void read();
        void print();
};

void TwoNumbers::read()
{
    cout << "First number: ";
    cin >> first;
    cout << "Second number: ";
    cin >> second;
}
void TwoNumbers::print()
{
    cout << "First = " << first << endl;
    cout << "Second = " << second << endl;
    cout << "Sum = " << sum() << endl;
    cout << "Sub = " << sub() << endl;
}

int main()
{
    TwoNumbers obj;
    
    obj.assign(30,23);
    cout << "Information of two numbers" << endl;
    obj.print();

    int f = obj.getFirst();
    int s = obj.getSecond();
    obj.assign(f*f, s*s);

    cout << "\nAfter making them squared," << endl;
    cout << "Information of two numbers" << endl;
    obj.print();

    cout << "\nInput two numbers" << endl;
    obj.read();

    cout << "\nInformation of two numbers input" << endl;
    obj.print();

    return 0;
}