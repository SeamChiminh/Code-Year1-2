#include<stdio.h>
#include<conio.h>
int sum(int a, int b, int c = 2)
{
	return a + b + c;
}
int main()
{
	int A , B ,C;
	int result;
	
	printf("input A : ");scanf("%d",&A);
	printf("input B : ");scanf("%d",&B);
	//printf("input C : ");scanf("%d",&C);
	
	result = sum(A,B);
	
	printf("The vault is = %d",result);
	
	getch();	
} 