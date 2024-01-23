#include<iostream>
#include<conio.h>
using namespace std;

char* passwordChar(char* password)
{
    char input;
    int index = 0;
    while(1)
    {
        input = getch(); // ចាប់តម្លៃពីkeyboardម្ដង១តួៗ
        if(input == 13) break;
        else if(input == 8)//សម្រាប់លុប 8 = key ​backspaceវិញ
        {
        	if(index > 0) // បើតូចជាង ០​ វិញមិនលុបទៀតទេ
        	{
                index--;
                cout << "\b \b" ; // \b​មានន័យថារំកិល​ cursor ពីស្ដាំមកឆ្វេងម្ដង១
                password[index] = '\0' ; //<\0>​ មានន័យថាទទេ empty
			}
		}
        //32ជាkey​ space និង key tap 9
        else if(input == 32 || input == 9) continue;//ជួបcontinueមានន័យថាវាមិនធ្វើកូដខាងក្រោមទេ
        else
        {
           password[index] = input;
            cout << "*";
            index++;
        }
    }
}