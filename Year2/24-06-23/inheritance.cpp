#include<iostream>
#include<conio.h>

Class person
{
	Private:
		String name;
		Char sex;
	Public:
		Person(string name="null", char sex=' ');
		Void setname(string name)
		{
			name = name
		}
		Void setsex(char sex);
		Void inputperson();
		Void printstudent();
};
Class student:public person
{
	Private:
		Float math, eng, kh, total, average;
		Char grade;
	Public:
		Student(string name="null", char sex= 'M', float meth=0, float eng=0, float kh=0);
		Float findtotal();
		Float findaverage();
		Char findgrade();
		Float getaverage()const;
		Void inputstudent();
		Void printstudent();
};

int main()
{
	
	return 0;
}
