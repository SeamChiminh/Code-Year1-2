#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//itoa() = conver string to int
main()
{
	int a = 12345;
	char b[20];
	
	itoa(a, b, 2); // 2 means binary;
	printf("binary = %s\n",b);
	
	itoa(a, b, 10); // 10 means decimal
	printf("Decimal = %s\n",b);
	
	itoa(a, b, 16); // 16 means hexadecimal
	printf("Hexadecimal = %s\n",b);
	getch();
}