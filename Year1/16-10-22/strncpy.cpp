#include<stdio.h>
#include<conio.h>
#include<string.h>
//strncpy()
int main()
{
	char s[] = "khmer";
	char a[20] = "";
	
	printf(" s = %s\n", s);
	printf(" a = %s\n",a);
	
	strncpy(a,s,2); // copy s '2 number' to a 
	
	printf("after a = %s\n",a);
	
	getch();
}