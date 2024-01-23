#include<stdio.h>
#include<conio.h>
#include<string.h>
//strrev() = reverse string
main()
{
	char str[] = "cambodia";
	
	printf("string before strrev():  %s\n",str);
	
	printf("string after strrev():  %s\n",strrev(str));//reverse string
	
	getch();
}