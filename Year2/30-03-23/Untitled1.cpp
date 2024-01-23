#include<iostream>
#include<conio.h>
using namespace std;

class point
{
	private:
		int x,y;
	public:
		point();
		point(int);
		point(int,int);
		void setx(int x)
		{
			this->x=x;
		}
		void sety(int y)
		{
			this->y=y;
		}
		void getx()
		{
			x=x;
		}
		void gety()
		{
			y=y;
		}
		void input();
		void print();
			
};

int main()
{
	point p[5]={point(),point(2),point(),point(2,3),point(2)};
	
	for(int i =0; i<5; i++)
	{
		p[i].print();
	}
	
	
	getch();	
}
