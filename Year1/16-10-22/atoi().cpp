#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//atoi() = conver char to int
main()
{
	char a[20] = "20";
	int value = atoi(a);
	int b = 2;
	
	printf("value is  = %d\n",value);
	printf("b + value  = %d", b + value);
	getch();
}