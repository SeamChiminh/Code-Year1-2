#include<stdio.h>
#include<conio.h>
#include<string.h>
//strset()//
main()
{
	char str[] = "cambodia";
	
	printf("Oraginal string is = %s\n", str);
	printf("After use strset() = %s\n",strset(str,'$'));
	
	getch();
}