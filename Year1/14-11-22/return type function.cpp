#include<stdio.h>
#include<conio.h>

int addnum(int n1, int n2)
{
	int sum;
	
	sum = n1 + n2;
	
	return sum;
}

main()
{
	int num1, num2, result;
	
	printf("input num1: ");
	scanf("%d", &num1);
	printf("input num2: ");
	scanf("%d", &num2);
	
	result = addnum(num1 , num2);
	
	printf("Result = %d \n",result);
	
	getch();
	
	
	
}