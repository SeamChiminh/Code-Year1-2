#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    private:
        int id;
        char name[20];
        char sex;
        int age;
        float avg;
    public:
        void input()
        {
            cout << "Enter Id   : ";
            cin >> id; fflush(stdin);
            cout << "Enter Name : ";
            cin.get(name,20); 
            cout << "Enter sex  : ";
            cin >> sex; fflush(stdin);
            cout << "Enter avg  : ";
            cin >> avg;
            cout << endl;
        }
        void output()
        {
            cout << "==== Score ====" << endl;
            cout << "ID   = " << id << endl;
            cout << "Name = " << name << endl;
            cout << "Sex  = " << sex << endl;
            cout << "avg  = " << avg << endl;
            cout << "==============" << endl;
         }
};

int main()
{
    student s;

    s.input();
    s.output();
    getch();
    return 0;
}