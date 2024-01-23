#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	int n;
	int count = 0;
	fp = fopen("score.bin","rb");
	if(fp != NULL){
		while(fread(&n, sizeof(int), 1, fp) == 1)
		{
			if(n >= 50 )
			{
				printf("%d\t",n);
			}
			else // (n < 50) = n less than 50
			{			
				count++; // count number of failed;
				printf("%d failed student\n");		
			}
			
		}
		fclose(fp);	
	}
	else
		puts("File not found");
	
	getch();
}