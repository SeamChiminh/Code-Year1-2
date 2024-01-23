#include<stdio.h>
#include<conio.h>
void maxmin(int a[], int n, int *max, int *min)
{
	int i;
	
	*max = *min = a[0];
	
	for( i = 1; i<n; i++)
	{
		if(a[i] > *max)
		{
			*max = a[i];
		}
		else if(a[i] < *min)
		{
			*min = a[i];
		}
	}
}
int main()
{
	int a[10],big,small;
	
	for(int i = 0; i<10; i++)
	{
		printf("Enter 10 number %d : ",i);
		scanf("%d",&a[i]);
	}
	maxmin(a, 10, &big, &small);
	
	printf("largest = %d\n",big);
	printf("smallest = %d",small);
	
	getch();
}