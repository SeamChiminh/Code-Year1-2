#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int c;
	char ch;
	
	do
	{
		if(c == 0)
		{
			cout << "Programming" << endl;
			cout << "C / C++" << endl;
			cout << "C#" << endl;
			cout << "Java" << endl;
		}
		ch = getch();
		
		if(ch != 27)
		{
			cout << "Wrong press [ESC] key " << endl;
			c++;
		}
		
		if(c > 3)
		{
			system("cls");
			c = 0;
		}
	}while(ch != 27);
	
	cout << "Thank you for pressing [ESC] key " << endl;
	cout << "Bye bye!" << endl;
	
	
	getch();
	return 0;
}