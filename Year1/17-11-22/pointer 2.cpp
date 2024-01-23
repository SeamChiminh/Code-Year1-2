#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p = a;
	
	for(int i=0; i<5; i++)
	{
		//printf("%d ",*p);
		//printf("%d ",a[i]); // print the arry by index
		//printf("%d",a+i); //print address of all arry
		//printf("%d",*(a+i)); // print value of arry element
		printf("%d",*a); // will print value of a[0] only
		p++;
	}
	

	getch();
	
}