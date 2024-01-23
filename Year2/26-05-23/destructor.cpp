#include<iostream>
#include<conio.h>
using namespace std;

class ewp
{
	public:
		ewp()
		{
			cout << " starting obj :" << this << endl;
		}
	~ewp()
	{
		cout << " destroying obj: " << this << endl;	
	}		
};

int main()
{
	ewp p1, p2, p3;
	
	cout << string(45,'-') << endl;
	cout << "add &p1: " << &p1 << endl;
	cout << "add &p2: " << &p2 << endl;
	cout << "add &p3: " << &p3 << endl;
	
	cout << string(46,'-') << endl;
	system(" pause");
	
	ewp *e1;
	e1 = &p1;
	
	ewp *e2;
	e2 = new ewp();
	system("pause");
	
	delete e2;
	 
	getch();
}