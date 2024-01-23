#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//atof() = conver char to float
main()
{
	char a[20] = "1.2";
	float value = atoi(a);
	int b = 2;
	
	printf("value is  = %.2f\n",value);
	printf("b + value  = %.2f",b + value);
	getch();
}