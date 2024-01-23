#include<iostream>

using namespace std;

int main()
{
	int *pi;
	float *pf;
	char *pc;
	
	pi = new int(100);
	pf = new float(1.2);
	pc = new char('m');
	
	cout << "*p1 = " << *pi << endl;
	cout << "*pf = " << *pf << endl;
	cout << "*pc = " << *pc << endl;
	
	delete pi;
	delete pf;
	delete pc;  
}