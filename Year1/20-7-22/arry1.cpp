#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n;
	float avg[100];
	
	cout << "Enter n : ";
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		cout << "Average" << i+1 << ":";
		cin >> avg[i];
	}
	for(int i=0; i<n; i++)
	{
		cout << avg[i] << "   " ;
	}
	cout << endl;
	float top;
	top=avg[0];
	for(int i=0; i<n; i++)
		if(top>avg[i])
		top=avg[i];
	cout << "top score: " << top;
	
	getch();
}