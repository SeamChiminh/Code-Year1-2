#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int n,id[20],age[20];
	char name[20][30],sex[20];
	
	printf("input n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("---Kid %d ---\n",i+1);
		printf("Id   : ");
		scanf("%d",&id[i]);
		fflush(stdin);
		
		printf("name : ");
		gets(name[i]);
		
		printf("Sex  : ");
		scanf("%c", &sex[i]);
		
		printf("Age  : ");
		scanf("%d", &age[i]);
		
	}
	puts("Id\t Name\t Sex\t Age\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\t %s\t %c\t %d\n", id[i],name[i],sex[i],age[i]);
		
	}
	//sort
	int tmp;
	char st[30],c;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
		if	
		}
	}
}