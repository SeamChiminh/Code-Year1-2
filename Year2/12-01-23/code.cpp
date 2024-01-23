#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    char c;
    int r = 0;

    while(1)
    {
        cout << "Press [Enter] to start" << endl;
        c = cin.get();

            if(c == '\n')
            {
                cout << "c = New line\n";break;
            }
            if(r == 1)
               {
                cout << "Skip pressing [Enter]\n";
                cout << "c = " << c << endl;
                r = 1; //fflush(stdin);
               }
    }
    cout << "[Exit] app" << endl;
    cin.get();
    return 0;
}