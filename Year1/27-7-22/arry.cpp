#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int n, a[20];
	
	cout << "input n: ";
	cin >> n;
	//input 
	for(int i=0; i<n; i++)
	{
		cout << "Enter number" << i+1 << " : "; 
		cin >> a[i];
	}
	//output 
	cout << "Show arry elements" << endl;
	for(int i=0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	//delete
	int num;
	cout << "Enter delete: ";
	cin >> num;
	for(int i=0; i<n; i++)
	{
		if(a[i] == num)
		{
			n = n-1;
			for(int j=i; j<n; j++)
			{
				a[j] = a[j+1];
				i--;
			}
		}
	}
	//output
	cout << endl;
	cout << "after deleting" << endl;
	for(int i=0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	//insert
	int number, pos;
	cout << "Enter new number: ";
	cin >> number;
	cout << "Enter position: ";
	cin >> pos;
	for(int i=n; i>pos; i--)
	{
		a[i] = a[i-1];
		a[pos-1] = number;
		n=n+1;
	}
	cout << endl;
	cout << "After inserting" << endl;
	for(int i=0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	//update
	cout << endl;
	int n1,n2;
	cout << "Search    : ";
	cin >> n1;
	cout << "update to : ";
	cin >> n2;
	for(int i=0; i<n; i++)
	{
		if(a[i] == n1)
		{
			a[i] == n2;
		}
	}
	cout << endl;
	cout << "After updating" << endl;
	for(int i=0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	getch();
}