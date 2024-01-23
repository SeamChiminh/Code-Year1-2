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
	int n;
	
	fp = fopen ("student.bin","rb");
	
	if(fp != NULL)
	{
		fseek(fp,0,2);
		n = ftell(fp)/sizeof(Student);
		rewind(fp);
		fread(std, sizeof(Student), n, fp);
		for(int i=0; i<n; i++)
		{
			printf("id : %d\n",std[i].id);
			printf("name : %s\n",std[i].name);
			printf("avg : %.2f\n",std[i].avg);
			printf("\n");
		}
		fclose (fp);
	}
	else 
	{
		printf("file not found\n");
		getch();
	}
	getch();
}
	
	
	