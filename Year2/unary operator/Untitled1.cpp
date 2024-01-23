#include<iostream>
#include<conio.h>
using namespace std;

class number
{
	private:
		int num;
	public:
		number(int num=0):num(num){}
		void setnum(int n){num=n;}
		int getnum() connst{return num;}
		void print()
		{
			cout << "num = " << num << endl;
			
		}
		
		int operator+()
		{
			
		}
		//prefix increment operator++()
		void operator++()
		{
			cout << "calling operator__() " << endl;
			++num;
		}
		void operator--()
		{
			cout << "calling operator--() " << endl;
			--num;
		}
		void operator++(int)
		{
			++num;
		}
		int operator++(int)
		{
			int x=num;
			++num;
			return x;
		}
		int operator--(int)
		{
			
		}
};
int main()
{
	number a(10);
	
	a.print();//num=10
	-a; //
	a.print();//num=-10
	n=a++; // n=a.operator++(0)
	cout << "n=" << n << endl;
	a.print();
	
}