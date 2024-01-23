#include<stdio.h>
#include<conio.h>
#include<string.h>
//strtok()//split string 
main()
{
	char str[] = "cambodia,khmer,cambodian";
	char *p;
	
	printf("string \"%s\" is split into tokens:\n",str);
	
	p = strtok(str,",");
	while (p != NULL)
	{
		printf("\n%s\n",p);
		p = strtok(NULL, ",");
	}
	
	
	getch();
}