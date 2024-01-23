#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice;
	A:
	system("cls");
	
	printf("1. Write data to file\n");
	printf("2. Read data to file\n");
	printf("3. Update data \n");
	printf("4. count element \n");
	printf("5. Exit program\n");
	printf("Chooes: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
				FILE *fp1;
				int num;
				
				printf("==>> Write data to binary file <<==\n");
				fp1 = fopen("number.bin","ab");
				do
				{
					printf("Input number: ");
					scanf("%d",&num);
					fwrite(&num,sizeof(int),1,fp1); // write data to binary file
					printf("Press <Enter> for continue\n");
					
				}while(getch() == 13);
				
				fclose(fp1);
				printf("closing...\n");
				getch();
				goto A;
		case 2: 
				FILE *fp;
				int n;
				
				printf("==>> Read data from binary file <<==\n\n");
				fp = fopen("number.bin","rb");
				if(fp != NULL)
				{
					while(fread(&n,sizeof(int),1,fp) == 1)
					{
						printf("%d\t",n);
					}
					fclose(fp);
				}
				else
				{
					printf("File not found\n");
					getch();
				}
				getch();
				goto A;
		case 3: 
				int m;
				int x,y;
				FILE *fp2;
				
				printf("==>> Update data from binary file <<==\n\n");
				
				fp2 = fopen("number.bin","r+b");
				printf("Search number : ");
				scanf("%d",&x);
				printf("Update to     :");
				scanf("%d",&y);
				
				while(fread(&m,sizeof(int),1,fp2) == 1)
				{
					if(m == x)
					{
						fseek(fp2,-sizeof(int),1);
						fwrite(&y,sizeof(int),1,fp2); // write data new to binary file 
						fseek(fp2,0,1); // refresh
					}
				}
				fclose(fp2);
				goto A;
				
		case 4: 
				int count;
				FILE *fp3;
				fp3 = fopen("number.bin","rb");
				
				fseek(fp3,0,2); // 0 = first , 2 = end
				count = ftell(fp3) / sizeof(int);
				printf("This are %d number of element\n",count);
				
				fclose(fp3);
				getch();
				goto A;
				
						
		case 5: 
				system("cls");
				printf("Thank for using\n");
				return 0;
		default:
				printf("Not found, Please enter again.\n");
				getch();
				goto A;
				
	}
	getch();
	
}