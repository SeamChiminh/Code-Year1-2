#include<stdio.h>
#include<conio.h>

void sum(int i, int j, int k)
{
	int s;
	
	 s = i + j + k;
	 printf("sum = %d\n",s);
}
int main()
{
	int a = 5;
	
	sum(2, 3*a,8);

	getch();
}