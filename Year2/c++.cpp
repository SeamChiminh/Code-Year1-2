#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int c;

    for(int i=0; i<50; i++)
    {
        cout << i << endl;
        ++c;

        if(c == 10 & i!=50)
        {
            system("pause");
            system("cls");
            c = 0;
        }    
    }

    cout << "finished" << endl;
    

    getch();
    return 0;
}