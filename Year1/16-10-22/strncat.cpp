#include<stdio.h>
#include<conio.h>
#include<string.h>
//strncat()
int main()
{
	char s[] = "I love ";
	char a[] = "Cambodia ";
	
	printf(" s = %s\n", s);
	printf(" a = %s\n",a);
	
	strncat(a,s,7);
	
	printf("after a = %s",a);
	
	getch();
}