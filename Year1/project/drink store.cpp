#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[30], id[10];
	int qty;
	float price;
	float total;
		
}Drinkstore;

Drinkstore d[50];
int n;

void input()
{
	n = 2;
	strcpy(d[0].id,"1");
	strcpy(d[0].name,"Coca");
	d[0].qty = 2;
	d[0].price = 1.2;
	
	strcpy(d[1].id,"2");
	strcpy(d[1].name,"sting");
	d[1].qty = 3;
	d[1].price = 1.5;
	
	d[0].total = d[0].qty * d[0].price;
	d[1].total = d[1].qty * d[1].price;
}

void line()
{
	printf("\t");
	for(int i=0; i<=78; i++)
	{
		printf("=");
	}
}

void view(Drinkstore d[], int n)
{
	system("color 1"); // blue
	puts("\t\t\t  =========================================");
	puts("\t\t\t  =======>>       View data       <<=======");
	puts("\t\t\t  =========================================");
	line();
	puts("\n\tID \t\tName \t\t\tQty \t\tPrice \t\ttotal");
	line();
	puts("");

	for( int i=0; i<n; i++)
	{	
		printf("\n\t%s \t\t%s \t\t\t%d",d[i].id,d[i].name,d[i].qty);
		printf("\t\t%.2f \t\t%.2f\n",d[i].price,d[i].total);	
	}
	puts("");
	line();
	puts("\n\n\t==>> Press [Any key] for back.");
}	
void sort(Drinkstore d[], int n)
{
	Drinkstore Tmp;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(strcmp(d[i].id, d[j].id) > 0)
			{
				Tmp = d[i];
				d[i] = d[j];
				d[j] = Tmp;
			}
		}
	}
	view(d,n);
}

void menu()
{
	system("color 7"); // white color
	puts("\t=========================================");
	puts("\t=======   Welcome to Drink Store   ======");
	puts("\t=========================================\n");
	
	puts("\t==>> 1. Add drink");
	puts("\t==>> 2. View data");
	puts("\t==>> 3. Search data");
	puts("\t==>> 4. Delete data");
	puts("\t==>> 5. Update data");
	puts("\t==>> 6. Exit program");
	
}

void search(Drinkstore d[], int n)
{
	char ID[10];
	bool found = 0;
	a:	
	
	system("cls");
	system("color 6");
	printf("\t==>> Input ID to search: ");
	scanf("%s",&ID);
	
	for(int i=0; i<n; i++)
	{	
		if(stricmp(d[i].id, ID) == 0)
		{
			system("cls");
			puts("\n");
			line();
			puts("\n\tID \t\tName \t\t\tQty \t\tPrice \t\ttotal");
			line();
			printf("\n\t%s \t\t%s \t\t\t%d",d[i].id,d[i].name,d[i].qty);
			printf("\t\t%.2f \t\t%.2f\n",d[i].price,d[i].total);
			line();	
			found = 1;
		}
	}
		if(found == 0)
		{
			system("cls");
			puts("\n\n");
			system("color 4"); //red
			puts("\t==>> Not found, please input again... <<==");
			getch();
			goto a;
		}
		else
		{
			puts("\n\n\t==>> Has been found... <<==");
			puts("\t==>> Press [Any key] for back <<==");
		}
}
void Delete( Drinkstore d[], int &n)
{
	char id[10];
	int Choose;
	int found = 0;
	v:
		
	system("cls");
	system("color 2"); //green
	printf("\t==>> Delete by ID : ");
	scanf("%s",&id);

	for(int i=0; i<n; i++)
	{	
		if(stricmp(d[i].id, id) == 0)
		{
			system("cls");
			P:
				
			line();
			puts("\n\tID \t\tName \t\t\tQty \t\tPrice \t\ttotal");
			line();
			printf("\n\t%s \t\t%s \t\t\t%d",d[i].id,d[i].name,d[i].qty);
			printf("\t\t%.2f \t\t%.2f\n",d[i].price,d[i].total);
			line();
			puts("\n\n\t==>> Has been found... <<==\n");
			
			puts("\t==>> 1. Delete");
			puts("\t==>> 2. Don't delete\n");
			printf("\t==>> Choose : ");
			scanf("%d",&Choose);
			found = 1;
			
			
			switch(Choose)
			{
				case 1:
						n = n - 1;
						for(int j=i; j<n; j++)
						{
							d[j] = d[j+1];
							i--;
						}	
						puts("\n\t==>> Has been Deleted... <<==\n");
						break;
						
				case 2:
						puts("\t==>> Press [Any key] for back. <<==");
						break;
				default:
						system("cls");
						puts("\n\t==>> Please input again... <<==");
						getch();
						system("cls");
						goto P;
			}
		}
	}
	if(found == 0)
	{	
		system("cls");
		system("color 4");
		puts("\n\n\t==>> Not found, please input again... <<==");
		getch();
		goto v;
	}
}
void update(Drinkstore d[], int n)
{
	Drinkstore tmp;
	char id[10];
	int found;
	w:
	
	system("cls");
	system("color 3");
	printf("\t==>> Update by ID : "); scanf("%s",&id);
	
	for(int i=0; i<n; i++)
	{
		if(stricmp(d[i].id, id) == 0 )
		{
			found = 1;
			tmp = d[i];
			
			system("cls");
			puts("\n");
			line();
			puts("\n\tID \t\tName \t\t\tQty \t\tPrice \t\ttotal");
			line();
			printf("\n\t%s \t\t%s \t\t\t%d",tmp.id,tmp.name,tmp.qty);
			printf("\t\t%.2f \t\t%.2f\n",tmp.price,tmp.total);
			line();
			puts("\n\n\t==>> Has been found. <<==");
			puts("\n");	
			o:
					
			puts("\t==>> 1. Update name");
			puts("\t==>> 2. Update qty");
			puts("\t==>> 3. Update price");
			puts("\t==>> 4. Save ");
			puts("\t==>> 5. Exit");
			printf("\t==>> Choose: ");
			switch(getch())
			{
				case '1':
						system("cls");
						printf("\n\t==>> New Name [%s] : ",tmp.name);
						fflush(stdin); gets(tmp.name);
						puts("\t==>> Has been changed... <<==\n\n");
						getch();
						goto o;
						
				case '2':
						system("cls");
						printf("\n\t==>> New Qty [%d] : ",tmp.qty);
						fflush(stdin); scanf("%d",&tmp.qty); 
						puts("\t==>> Has been changed... <<==\n\n");
						getch();
						goto o;
						
				case '3':
						system("cls");
						printf("\n\t==>> New Price [%.2f] : ",tmp.price);
						scanf("%f",&tmp.price); 
						puts("\t==>> Has been changed... <<==\n\n");
						getch();
						goto o;
						
				case '4':
						system("cls");
						d[i] = tmp;
						d[i].total = tmp.qty * tmp.price;
						puts("\n\t==>> Has been saved... <<==");
						break;
						
				case '5':
						system("cls");
						puts("\n\t==>> Exiting... <<==");
						break;
						
				default :
						system("cls");
						puts("\n\t==>> Please input again... <<==");
						getch();
						system("cls");
						goto o;
			}
		}
	}
	if(found == 0)
		{
			system("cls");
			system("color 4");
			puts("\n\n\t==>> ID not found, please input again... <<==");
			getch();
			goto w;
		}
}
int main()
{
	int choice;
	input();
	A: system("cls");
	menu();
	
	printf("\t==>> choose: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
				t:
				system("cls");
				system("color 3");
				char id[10];
               	int i,found; 
				found = 0;
        		
               	printf("\t==>> Input ID : ");fflush(stdin);
               	gets(id);
               	for(i=0; i<n; i++)
               	{
               		if(stricmp(d[i].id,id) == 0)
					{	
						system("cls");
						system("color 4");
                		puts("\n\n\t==>> Already have, Please input again... <<==");
                    	found = 1;
                    	getch();
                    	goto t;
                	}
				}
                if(found == 0)
				{
               		strcpy(d[n].id,id);
               		
                    printf("\t==>> Name     : "); gets(d[n].name);
                    printf("\t==>> Qty      : "); scanf("%d",&d[n].qty);
					printf("\t==>> Price    : "); scanf("%f",&d[n].price);
					
					d[n].total = d[n].qty * d[n].price;
					
					puts("\n\t==>> Has been saved... <<==");	
					puts("\n\t==>> Press [Any key] for back. <<==");
           			n++;
               	}
				getch();
				goto A;
				
		case 2:	
				system("cls");
				sort(d,n);
				getch();
				goto A;
				
		case 3:
				system("cls");
				search(d,n);
				getch();
				goto A;
				
		case 4: 
				system("cls");
				Delete(d,n);
				getch();
				goto A;
				
		case 5:
				system("cls");
				update(d,n);
				getch();
				goto A;
				break;
				
		case 6:
				system("cls");
				system ("color 2");
				puts("\n\n\n\n");
				puts("\t\t\t========================================");
				puts("\t\t\t=========>> Thanks for using <<=========");
				puts("\t\t\t========================================\n");
				puts("\t\t\t\t        (^ __ ^)\n");
				
				return 0;
				
		default:
				system("cls");
				system("color 4");
				puts("\n\n\t==>> Please input again. <<==");
				getch();
				goto A;
	}
	
	
}
