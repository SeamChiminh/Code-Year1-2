#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 3,b = 5;
	
	printf("a = %d, b = %d\n", a,b);
	
	swap(&a,&b);
	
	printf("a = %d, b = %d\n", a,b);
	
	getch();
}