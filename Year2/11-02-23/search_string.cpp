#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char s1[] = "Hello C++ programming!";
    char s2[20];
    char *ps = NULL;

    cout << "input a search s2: ";
    cin.getline(s2,20);

    ps = stcstr(s1,s2);
    if(ps != NULL)
        cout << "ps =" << ps << endl;
    else   
        cout << "not found! " << endl;

    getch();
    return 0;
}
