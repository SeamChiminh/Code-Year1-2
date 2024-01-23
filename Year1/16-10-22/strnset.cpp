#include<stdio.h>
#include<conio.h>
#include<string.h>
//strnset()//
main()
{
	char str[] = "cambodia";
	
	printf("Oraginal string is = %s\n", str);
	printf("After use strset() = %s\n",strnset(str,'$',3));
	
	getch();
}