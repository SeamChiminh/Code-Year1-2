#include<iostream>
#include<conio.h>
//template function
using namespace std;

template<class dynamic>

//void display(dynamic param)
//{
//	cout << param << endl;
//}
void Arry(dynamic arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{
	
//	display(12);
//	display("hello"); 
	int num[5] = {1, 3, 4, 5, 6};
	double score[3] = {12.3, 32.1, 4.5,};
	string weeks[7] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
	
//calling
	Arry<int>(num, 5);
	
	Arry<double>(score, 3);
	
	Arry<string>(weeks, 7);
	
	
	getch();
	return 0;
}