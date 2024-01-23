#include<stdio.h>
#include<conio.h>
#include<string.h>
//stricmp() == compare two string 
main()
{
	char *str1 = "HELLo";
	char *str2 = "hello";
	int i ;
	
	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	
	i = stricmp(str1, str2);
	if (i == 0)
	{
		printf("There is str1 = str2 \n");	
	}
	else if(i < 0)
	{
		printf("There is str1 < str2 \n");
	}
	else
	{
		printf("There is str1 > str2 \n");
	}
	
	printf("%d",i);
	getch();
}