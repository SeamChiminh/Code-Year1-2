#include<iostream>
#include<conio.h>
using namespace std;

int getvalue()
{
	int v; int a=0;
	
	while(!a)
	{
		cout << "input v: ";
		cin >> v;
		
		if(cin.fail())
		{
			cout << "Input wrong please input again." << endl;
			
			//cin.clear();
			//cin.ignore();
		}
		else a=1;
	}
	return v;
	
}

int main()
{
	getvalue();
	
	getch();
	return 0;
}