#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	int *pointer;
	number = 20;
	
	printf("Address of number = %p\n",&number);
	printf("value of number = %d\n",number);
	pointer = &number;
	printf("Address of pointer = %p\n",&pointer);
	printf("value of pointer = %d\n",pointer);
	printf("value have point to is = %d",*pointer);
	getch();
}