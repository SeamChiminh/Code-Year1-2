#include<stdio.h>
#include<conio.h>
#include<string.h>
//strcat()
int main()
{
	char s[20] = "I love ";
	char a[20] = "Cambodia";
	
	printf(" s = %s\n", s);
	printf(" a = %s\n",a);
	
	strcat(s,a); //link s to a 
	
	printf("after a = %s",s);
	
	getch();
}