#include<iostream>
#include<iomanip>
using namespace std;

int addNumber(int a, int b)
{
	if(a==0 && b==0)
	{
		throw string("string inValid, argument");
		return(a+b);
	}
	
	float divedeNumber(int a, int b)
	{
		if(b==0) throw"Dividsion by 0";
		return (float ) a/b;
	}
	
	int getnumber(string s)
	{
		int num;
		while(i)
		{
			try
			{
				cout << s;
				cin >. Num
				if(!cin)throw string("string wrong format!");
				else break;
			}getch(string s)
			{
				cout <<  s << endl;
				cin.clear();
				cin.seekg(0,ios::beg);
			}
		}
		return num;
	}
	
int main()
{
	int a,b, add=0;
	float s=0.0;
	while(1)
	{
		try
		{
			cout << "Input 2 numbers " << endl;
			a=getnumber("enter a: ");
			b=getnumber("enter b: ");
			cout  << fixed << setprecision(2) << "a = " << a << ", b = " << b << endl;
			add=addNumber(a,b);
			cout << "add = " << add << endl;
			s=divideNumber(a,b);
			cout << "dive(1) = " << endl;
			cout << string(40,' - ') << endl;
			while(cout << "Next(y/n)? ", cin.sync(), strchr("y/n", c=cin.get()) == NULL)
			if(c='n') throw sting ("exit");
			
		}catch(stinr s)
		{
			cout <<  s << endl;
			if(s=="exit") throw;
		}catch(const char *err)
			{
				cout << err << endl;
			}
		}catch()
		{
			cout << "exit application "<< endl;
			cout << "by bye ! "<< endl;
		}
		return 0;
	}
}
