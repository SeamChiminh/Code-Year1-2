#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char s[] = "hello    C++   programming";

    int i = 0;
    int a = 0;

    while(s[i] != '\0')
    {
        if(s[i]!= ' ' && a == 1)
        {
            s[i] = '\n';
            a=0;
        }
        else if(s[i] == ' ')
        {
            a = 1;
        }
        ++i;
    }
    getch();
    return 0;
}
