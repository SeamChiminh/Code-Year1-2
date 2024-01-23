#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//atol() = conver char to long
main()
{
	char a[20] = "1000000000";
	long b = atol(a);
	
	printf("b = %ld",b);
}