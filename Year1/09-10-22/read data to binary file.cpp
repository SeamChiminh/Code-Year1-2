//read date to binary file using fread()
//fread (&var, sizeof, items, FILE*);
#include<stdio.h>
#include<conio.h>

main()
{
	FILE *fp;
	int n;
	
	fp = fopen("number.bin","rb");
	if(fp != NULL){
		while(fread(&n, sizeof(int),1,fp) == 1){ //read date from binary file;
			printf("%d\t",n);
		}
		fclose(fp);
	}
	else
		puts("File not found\n");
	
	getch();
	
}