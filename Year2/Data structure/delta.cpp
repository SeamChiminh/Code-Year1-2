#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	double delta, x, x1, x2;
	int a, b, c;
	
	//input
	cout << "______INPUT________" << endl << endl;
	cout << "Input A : ";
	cin >> a;
	
	cout << "Input B : ";
	cin >> b;
	
	cout << "Input C : ";
	cin >> c;
	
	//condition
	if(a = 0)
	{
		x = (-c / b );
		cout << "This is value (a=0) = " << x << endl;
	}
	
	else if (c = 0)
	{
		x1 = 0; 
		x2 = (-b / a );
		cout << "This is value (c=0): " << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
	}
	
	else if(a + b + c == 0)
	{
		x1 = 1;
		x2 = ( c / a );
		cout << "This is value (a+b+c=0): ";
		cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
	}
	
	else if(a - b + c == 0)
	{
		x1 = 1;
		x2 = (-c / a );
		cout << "This is value (a-b+c=0): ";
		cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
	}
	
	else if(a==0 & b == 0 & c == 0)
	{
		cout << "Many Root" << endl;
	}
	
		delta = (b*b) - (4*a*c);
		
		if(delta ==0 )
		{
			x1 = x2 = ( b / 2*a);
			cout << "This is value (delta ==0 ): ";
			cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
		}
		
		else if(delta > 0 )
		{
			x1 = (-b + sqrt(delta)) / 2*a;
			x2 = (-b - sqrt(delta)) / 2*a;
			cout << "This is value (delta > 0 ): ";
			cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
		}
		
		else
		{
			cout << "No Root" << endl;
		}
	
	
	
	getch();
	return 0;
}