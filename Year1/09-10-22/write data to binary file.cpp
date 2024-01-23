//write data to binary file using fwrite()
//fwrite (&var, sizeof, items, FILE*);
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int n;
	fp = fopen("number.bin","ab");
	
	do{
		printf("input number: ");
		scanf("%d",&n);
		fwrite(&n,sizeof(int),1,fp); //write data to binary file
		puts("<Enter> to continue\n");
	}while(getch() == 13);
	
	fclose(fp);
}