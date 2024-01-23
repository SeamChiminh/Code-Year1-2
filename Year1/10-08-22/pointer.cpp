#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
//	int a,b,s;
//	int *ap, *bp, *sp;
//	
//	ap=&a;
//	bp=&b;
//	sp=&s;
//	
//	cout << "input a: ";
//	cin >> a;
//	
//	cout << "input b: ";
//	cin >> b;
//	
//	*sp = *ap + *bp;
//	
//	cout << &a << " + " << &b << " = " << &s;
//
	int num = 20;
	int *p;
	int *d;
	
	p = &num;
	q = &num;
	
	cout << "address of num = " << &num << endl;
	cout << "address of p = " << &p << endl;
	cout << "address of q = " << &q << endl;
	
	cout << "content of num = " << num << endl;
	cout << "content of p = " << p << endl;
	cout << "content of q = " << q << endl;
	
	cout << "value at content p = " << *p << endl;
	cout << "value at content q = " << *q << endl;
	
	
		
	getch();
}