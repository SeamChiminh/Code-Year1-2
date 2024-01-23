#include<stdio.h>
#include<conio.h>
int main()
{
	int count;
	FILE *fp;
	
	fp = fopen("number.bin","rb");
	fseek(fp,0,2);
	count = ftell(fp)/sizeof(int);
	printf("There are %d elements");
	
	fclose(fp);
	getch();
}