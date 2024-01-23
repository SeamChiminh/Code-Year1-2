#include<iostream>
#include<conio.h>
//overloading function
using namespace std;

void display(int param)
{
	cout << param << endl;
}

void display(float param)
{
	cout << param << endl;
}

void display(string param)
{
	cout << param << endl;
}
int main()
{
	display(12);
	display(3);
	display("Hello");
	
	getch();
	return 0;
}