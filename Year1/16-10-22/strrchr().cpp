#include<stdio.h>
#include<conio.h>
#include<string.h>
//strrchr()
main()
{
	char string [50] = "This is a string for testing";
	char *p;
	
	p = strrchr(string, 'i');
	printf("Character <i> is found at position %d", p-string+1);
	
	
	
	getch();
}