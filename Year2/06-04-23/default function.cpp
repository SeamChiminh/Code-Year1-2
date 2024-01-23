#include<iostream>
#include<conio.h>
using namespace std;

//default function

	void f(int x=0)
	{
		cout << "x=" << x << endl;
	}
	
	void g(int x, int y=0)
	{
		cout << "x = " << x << ",y = " << y << endl; 
	}
	
	//void r(int x=0, int y) // this is not default function
	//{
	//	cout << "x = " << x << ",y = " << y << endl; 
	//}
	void e(int x, int y=0)
	{
		cout << "x = " << x << ",y = " << y << endl;  
	}

int main()
{
	f();
	f(2);
	
	getch();
}