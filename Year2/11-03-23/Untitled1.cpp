#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	
	cout << setw(8) << "ID" << setw(15) << "Products" << setw(10) << "Qty" << endl;
	cout << setw(8) << 20 << setw(15) << "anchor beer" << setw(10) << 60 << endl;
	cout << setw(8) << 30 << setw(15) << "ABC beer" << setw(10) << 70 << endl;
	cout << setw(8) << 60 << setw(15) << "Fanta juice" << setw(10) << 40 << endl;
	
	cout << string(45,'*') << endl;
	
	int id[] = {1,5,100,3};
	char name[][20]={"sok chan", "heng ana", "van thy", "kok ka"};
	
//	cout << left;
	cout << setw(5) << "ID" << setw(15) << "Name"<< endl;
	cout << setw(5) << id[0] << setw(15) << name[0]<< endl;
	cout << setw(5) << id[1] << setw(15) << name[1]<< endl;
	cout << setw(5) << id[2] << setw(15) << name[2]<< endl;
	
	
	
	getch();
	return 0;
	
}