#include<iostream>
#include<conio.h>
using namespace std;

class person{
	private:
		char name[20];
		char Tel[20];
		float salary;
	
	public:
		void setname(const char name1[])
		{
			strcpy(name,name1);
		}
		void settel(const char tel[])
		{
			strcpy(Tel,tel);
		}
		void setsalary(const float s)
		{
			this -> salary = s;
		}
		char *getname()
		{
			return name;
		}
		char *gettel()
		{
			return Tel;
		}
		float getsalary()
		{
			return salary;
		}
		
};

person getperson() // how to call this func to main is : p1 = getperson
{
	//input data object(name, tel,salary)
	person obj;
	char name1[20];
	char Tel1[20];
	float salary1;
	cout << "input name: ";
	cin.getline(name1,20);
	cout << "input tel: ";
	cin.getline(Tel1,20);
	cout << "input salary: ";
	cin >> salary1; cin.syn();
	obj.setname(name1);
	obj.settel(Tel1);
	obj.setsalary(salary1);
	
	return obj;
}
void print(person p)
{
	cout << "====OUTPUT====="<< endl;
	cout <<	"Name	: " << p.name << endl;
	cout << "Tel	: " << p.Tel << endl;
	cout << "Salary : " << p.salary << " $" << endl;
}

person *getotherperson()
{
	
}
int main()
{
	person p1,p2;
	
	p1 = getperson();
	cout << p1.name << endl;
	
	getch();
	return 0;
}