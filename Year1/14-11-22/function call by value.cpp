#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
{
	int tmp;
	
	tmp = a;
	a = b;
	b = tmp;
	
	printf("after swap a = %d and b = %d ",a,b);
}
int main()
{
	int a, b;
	
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	
	printf("before swap a = %d and b = %d \n",a,b);
	
	swap(a,b);
	
	getch();
	
	
	
}