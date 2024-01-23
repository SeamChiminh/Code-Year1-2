#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;
 
int main()
{
	
	cout << "Hello C/C++ " << endl;
	cout << "Hello C# " << endl;
	cout << "_________________" << endl;
	
	char c = 'a';
	
	while(c != 'x' && c != 'q')
	{
		cout << "press <x> or <q> to exit" << endl;
		c = cin.get();
		
		if(c == '\n')
		{
			cout << "c = new line\n";
		}
		else
		{
			cout << "c = " << c << endl;
		}
		fflush(stdin);
	}
	
	return 0;
	
}