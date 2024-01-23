#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,*p,*q;
	
	p = &i;
	q = p;
	*p = 1;
	
	printf("%p\n",p);
	printf("%p\n",q);
	printf("%d",i);
	
	getch();
}