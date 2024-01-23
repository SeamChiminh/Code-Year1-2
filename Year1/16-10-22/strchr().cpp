#include<stdio.h>
#include<conio.h>
#include<string.h>
//strchr()
main()
{
	char string[50] = "This is a string for testing";
	char *p;
	
	p = strchr(string, 'i');
	
	printf("Character <i> is found ar position %d\n", p-string+1);
	
	
	getch();
	
}