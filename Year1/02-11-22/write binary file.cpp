#include<stdio.h>
#include<conio.h>
 main()
{
	typedef struct Student
	{
		int id;
		char name[30];
		float avg;
	};
	Student std[20];
	FILE *fp;
	fp = fopen ("student.bin","ab");
	int n;
	float av;
	
	printf("input number of student : ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("id : ");
		scanf("%d",&std[i].id);
		printf("name : ");
		fflush(stdin); gets(std[i].name);
		printf("avg : ");
		scanf("%f",&av);
		std[i].avg = av;
		
	}
	fwrite(std, sizeof(Student), n, fp);
	fclose(fp);
	getch();
	
}