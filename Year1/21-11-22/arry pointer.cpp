#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
	int a[N], *p;
	printf("enter %d numbers : ",N);
	for(p=a; p<a+N; p++)
	{
		scanf("%d",p);
	}
	printf("in reverse order : ");
	for(p=a+N-1; p>=a; p--)
	{
		printf(" %d\n",*p);
	}
	getch();
}