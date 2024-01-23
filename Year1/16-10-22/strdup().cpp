#include<stdio.h>
#include<conio.h>
#include<string.h>
//strdup()
main()
{
	
	char *p = "RUPP";
	char *p1;
	
	p1 = strdup(p);
	
	printf("Duplicated string is : %s", p1);
	
	
	
	getch();
}