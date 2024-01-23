#include<iostream>
#include<conio.h>
using namespace std;

class point
{
	private:
		int x,y;
	
	public:
//		point()
//		{
//			x=y=0; // overloaded	
//		}	
//		point(int v)
//		{
//			x=y=v; // constructor
//		}
//		point(int xx, int yy)
//		{
//			x=xx; y==yy;
//		}
		
		// or can create like this
		point(int xx=0, int yy=0)
		{
			if(xx!=0 && yy==0)
			{
				x=y=xx;
			}
			else
			{
				x=xx;
				y=yy;
			}
		}
		void print()
		{
			cout << "===output ====" << endl;
			cout << "x = " << x << ", y =" << y << endl;
		}
};

int main()
{
	point p1;
	point p2(10);
	point p3(3,4);
	p2.print();
	p3.print();
	
	cout << string(50,'-') << endl;
	point p[]{},{10},{3,4},{},{2,4},{9};
	return 0;
	getch();
}