#include<stdio.h>
#include<conio.h>
#include<string.h>
//strcpy()
int main()
{
	char s[] = "khmer";
	char a[20] = "";
	
	printf(" s = %s\n", s);
	printf(" a = %s\n",a);
	
	strcpy(a,s); // copy s to a
	
	printf("after a = %s\n",a);
	
	getch();
}