#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    string s;

    cout << "Input s: ";
    cin >> s;

    cout << "s = " << s << endl;
    cout << "length s = " << s.length() << endl;
    cin.sync();

    do{
        cout << "input another string (!=stop): ";
        cin >> s;

        if(s != "stop" && s != "STOP")
        {
            cout << "s= " << s << endl;
            cout << "length s = " << s.length() << endl;
        }
        cin.sync();
    }while((s.compare("stop")!=0 && s.compare("STOP")!=0));
    getch();
    return 0;
}