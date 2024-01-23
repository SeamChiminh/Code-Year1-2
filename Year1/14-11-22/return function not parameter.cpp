#include<stdio.h>
#include<conio.h>

int getInteger()
{
	int n ; 
	printf("input a positive integer: ");
	scanf("%d",&n);
	return n;	
}

int main()
{
	int n;
	int flag = 0;
	
	n = getInteger();
	
	for(int i=2; i<=n/2; i++)
	{
		if(n%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("%d is not a prime number.",n);
	}
	else 
	{
		printf("%d is a prime number.",n);
	}
	
	getch();
}