#include<iostream>

using namespace std;

int main()
{
	//ex1
//	//new operator
//	int *p1 = new int; // c++
//	//int *p1 = (int*)malloc(sizeof(int)); //int c
//	
//	float *pf;
//	pf = new float;
//	//pf = (int*)malloc(sizeof(float)); // c
//	
//	char *pc = new char;
//	//char *pc =(char*)malloc(sizeof(char)); //c
//	
//	//delete operator
//	
//	delete p1;
//	delete pf;
//	delete pc;


	//ex2
	//new operator
	int *pi;
	float *pf;
	
	pi = new int;
	pf = new float;
	
	*pi = 10;
	*pf = 1.5;
	
	cout << "p1 = " << pi << endl; //add
	cout << " pf = " << pf << endl; // add
	
	cout << " *pi = " << *pi << endl; //value
	cout << " *pf = " << *pf << endl;//value
	
	//delete 
	delete pi;
	delete pf;
	
}