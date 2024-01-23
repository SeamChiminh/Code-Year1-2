#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
//	//1
//	cout << setfill('*');
//	cout << setw(10) << 100 << endl;
//	cout << setw(10) << 'z' << endl;
//	cout << setw(10) << "hello" << endl;
//	cout << setfill(' ');
//	 
//	//2
//	cout << left;
//	cout << setw(10) << 1 << 2 << endl; 
//	cout << setw(5) << " " << setw(10) << 1 << 2 << endl;
//	cout << setw(10) <<  1 << 2 << endl; 
//	
//	//3
//	for(int i=0; i<=5; i++)
//	{
//		cout << string(i, '*') << endl;
//	}
//	
//	///4
//	cout.width(10);
//	cout << 100 << endl;
//	cout.width(10);
//	cout << 'Z' << endl;
//	cout.width(10);
//	cout << "Hello" << endl;
// 	  

	cout << fixed;
	cout << setprecision(0);
	cout << 13.12234 << endl;
	
	cout << fixed;
	cout.precision(9);
	cout << 12.34566 << endl;
	
	getch();
	return 0;
}