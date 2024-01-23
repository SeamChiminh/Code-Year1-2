#include<stdio.h>
#include<conio.h>
#include<string.h>
//strnicmp() = compare part of string
main()
{
	char *st = "helloworld";
	char *st1 = "hello";
	int i ;
	
	printf("st = %s\n",st);
	printf("st1 = %s\n",st1);
	
	i = strnicmp(st, st1, 5);
	
	if(i == 0)
	{
		printf("st and st1 are identical\n");
	}
	else if(i < 0)
	{
		printf("st < st1\n");
	}
	else
	{
		printf("st > st1\n");
	}
	printf("i = %d",i);
	
	getch();
	
}