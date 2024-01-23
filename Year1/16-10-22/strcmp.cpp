#include<stdio.h>
#include<conio.h>
#include<string.h>
//strcmp()
int main()
{
	char s[] = "I love ";
	char a[] = "Cambodia ";
	int i,j,k;
	
	i = strcmp (s, "khmer");
	j = strcmp (s, a);
	k = strcmp (s, "c");
	
	printf("\n%d %d %d", i, j ,k); 
	
	getch();
}