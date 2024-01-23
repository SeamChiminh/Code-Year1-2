#include<stdio.h>
#include<conio.h>

main()
{
	FILE *fp;
	int n;
	
	fp = fopen("score.bin","ab");
	do{
		printf("input point: ");
		scanf("%d",&n);
		fwrite(&n, sizeof(int), 1, fp);
		puts("<Enter> to continue");
	}while(getch() == 13);
	
	fclose(fp);

}