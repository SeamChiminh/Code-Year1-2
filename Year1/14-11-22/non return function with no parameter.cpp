#include<stdio.h>
#include<conio.h>
void checkPrime()
{
	int n, flag = 0;
	
	printf("input number : ");
	scanf("%d",&n);
	
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
}
int main()
{
	checkPrime();
	getch();
}