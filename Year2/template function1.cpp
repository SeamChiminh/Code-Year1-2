#include<iostream>
#include<conio.h>
//template function
using namespace std;

//class template
template<class T> 
class compare
{
	public:
		T max(T a, T b)
		{
			if(a>b) return a;
			else return b;
		}
	
};

int main()
{
	//object template
	compare<int> A;
	compare<double> B;
	
	//calling
	cout << A.max(3, 5) << endl;
	cout << B.max(1.2, 4.3) << endl;
	
	getch();
	return 0;
}
	        