#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class teacher
{
	private:
		char name[30];
		char subj[30];
		float hour, rate, salary;
		
		int a[] = {{3},{3}};
	
	public:
		teacher(const char []="NULL", const char []="NULL", float = 0.0, float = 0.0);
		float findSalary();
		float getSalary();
		char *getName();
		void input();
		void output();
		
};

teacher::teacher(const char name[], const char subj[], float hour, float rate)
: hour(hour),rate(rate)
{
	strcpy(this -> name, name);
	strcpy(this -> subj, subj);
	salary = findSalary();
}

float teacher::findSalary()
{
	return hour * rate;
}

float teacher::getSalary()
{
	return salary;
}

char *teacher::getName()
{
	return name;
}

void teacher::input()
{
	cout << "input name : ";
	cin.getline(name,30);
	
	cout << "input subject : ";
	cin.getline(subj,30);
	
	cout << "input hour : ";
	cin >> hour;
	
	cout << "input rate : ";
	cin >> rate; cin.sync();
	
	salary = findSalary();
}

void teacher::output()
{
	cout << left << fixed << setprecision(2);
	cout << setw(10) << "name" << setw(10) << "subj" << setw(10) << "hour" << setw(10) << "rate" << setw(10) << "salary" << endl;
}

void inputTeacher(teacher *t, int n)
{
	cout << "input " << n << "teachers" << endl;
	for(int i=0; i<n; i++)
	{
		cout << "teacher # " << i+1 << endl;
		cout << string(50,'-') << endl;
	}
}


