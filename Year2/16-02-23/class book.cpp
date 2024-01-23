#include<iostream>
#include<conio.h>
using namespace std;
class books
{

        int id;
        string name;
        int page;
        string author;

    public:
        void input()
        {
            cout << "========== Book ========" << endl;
            cout << "ID     = ";
            cin >> id; fflush(stdin);
            cout << "Name   = ";
            getline(cin, name);
            cout << "Page   = ";
            cin >> page; fflush(stdin);
            cout << "Author = ";
            getline(cin, author);
        }

        void output()
        {
            cout << endl;
            cout << "====== Date of book =======" << endl;
            cout << "ID     = " << id << endl;
            cout << "Name   = " << name << endl;
            cout << "Page   = " << page << endl;
            cout << "Author = " << author << endl;
            cout << "=====================" << endl;
        }
};

int main()
{
    books b;
    
    b.input();
    b.output();
    getch();
    return 0;
}