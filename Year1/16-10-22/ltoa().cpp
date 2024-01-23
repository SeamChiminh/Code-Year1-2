#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//ltoa() = conver long to string
main()
{
	long a = 12345678;
	char b[50];
	
	ltoa(a, b, 2); // 2 means binary
	printf("binary = %s\n",b);
	
	ltoa(a, b, 10); // 10 means decimal
	printf("Decimal = %s\n",b);
	
	ltoa(a, b, 16); // 16 means hexadecimal
	printf("hexadecimal = %s\n",b); 
	
	getch();
}