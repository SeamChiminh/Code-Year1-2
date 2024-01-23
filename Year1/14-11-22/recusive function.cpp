#include<stdio.h>
#include<conio.h>
int sum(int num)
{
	if(num != 0)
	{
		return num + sum(num - 1); //call itself
	}
	else
	{
		return num;
	}
}
int main()
{
	int number, result;
	
	printf("input number : ");
	scanf("%d",&number);
	
	result = sum(number);
	
	printf("The value is %d ",result);
	
	getch();
}