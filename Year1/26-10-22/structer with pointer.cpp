#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book
{
	char name[50];
	char auther[50];
	char subject[50];
	int book_id;
};
void printfbook(struct book *Book)
{
	printf("Book name : %s\n",Book->name);
	printf("Book auther: %s\n",Book->auther);
	printf("Book suject : %s\n",Book->subject);
	printf("Book id : %d\n",Book->book_id);
}
main()
{
	book book1;
	book book2;
	
	//book1
	
	strcpy(book1.name, "Funny");
	strcpy(book1.auther, "Seam chiminh");
	strcpy(book1.subject, "C programming");
	book1.book_id = 1;
	
	printfbook(& book1);
}