#include<iostream>
#include<conio.h>
using namespace std;

class person{
	public:
		char name[20];
		char Tel[20];
		float salary;
		
};

person getperson() // how to call this func to main is : p1 = getperson
{
	//input data object(name, tel,salary)
	person obj;
	cout << "input name: ";
	cin.getline(obj.name,20);
	cout << "input tel: ";
	cin.getline(obj.Tel,20);
	cout << "input salary: ";
	cin >> obj.salary;
}
void print(person p)
{
	cout << "====OUTPUT====="<< endl;
	cout <<	"Name	: " << p.name << endl;
	cout << "Tel	: " << p.Tel << endl;
	cout << "Salary : " << p.salary << " $" << endl;
}

int main()
{
	person p1,p2;
	
	p1 = getperson();
	cout << p1.name << endl;
	
	getch();
	return 0;
}