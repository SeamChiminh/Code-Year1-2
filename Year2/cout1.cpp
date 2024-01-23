#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n = 3;
	cout << "1. C / C++" << endl;
	cout << "2. C# " << endl;
	cout << "3. Java " << endl;
	
	cout << "Press [ESC] to Exit." << endl;
	
		if(getch() != 27)
		{
			cout << "Wrong please press [ESC] key!" << endl;
			
		}
		
		system("cls");
		cout << "Thank you pressing [ESC] key." << endl;
		cout << "Bye bye!";

	
//	getch();
	return 0;
}