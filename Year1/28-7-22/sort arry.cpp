#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;
int main()
{
	int n,id[20],age[20];
	string name[20], sex[20];
	
	cout << "input n : ";
	cin >> n;
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << "----- Kid -----" << i+1 << endl;
		
		cout << "Id  : ";
		cin >> id[i];
		fflush(stdin);
		cout << "Name: ";
		getline(cin,name[i]);
	
		cout << "sex : ";
		cin >> sex[i];
		
		cout << "Age : ";
		cin >> age[i];
	}
	cout << endl;
	cout << left;
	cout << setw(10) << "Id" ;
	cout << setw(20) << "Name" ;
	cout << setw(15) << "Sex" ;
	cout << setw(15) << "Age" ;
	for(int i=0; i<n; i++)
	{
		cout << left;
		cout << setw(10) << id[i];
		cout << setw(20) << name[i];
		cout << setw(15) << sex[i];
		cout << setw(15) << age[i];
	}
}