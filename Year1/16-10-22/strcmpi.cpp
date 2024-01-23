#include<stdio.h>
#include<conio.h>
#include<string.h>
//strcmpi()
int main(){
	char str1[] = "RUPP";
	char str2[] = "PP";
	int i,j,k;
	
	i = strcmpi (str1, "programing");
	j = strcmpi (str1, str2);
	k = strcmpi (str1, "C");
	
	printf("\n%d %d %d", i, j ,k); 
	
	getch();
	
}