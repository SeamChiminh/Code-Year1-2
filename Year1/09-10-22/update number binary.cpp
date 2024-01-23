#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	int a,b;
	FILE *fp;
	
	fp = fopen("number.bin","r+b"); // r+b = read file or write new data to file
	printf("Search number: ");
	scanf("%d",&a);
	printf("Update to : "); 
	scanf("%d",&b);
	
	while(fread(&num,sizeof(int),1,fp) == 1)
	{
		if(num == a)
		{
			fseek(fp,-sizeof(int),1);
			fwrite(&b,sizeof(int),1,fp);
			fseek(fp,0,1); // refresh
		}
	}
	fclose(fp);
}