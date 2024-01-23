//using fscanf to read data from text file
#include<stdio.h>
#include<conio.h>
void read_to_array(int num[],int &n){
	FILE *fp;
	fp=fopen("number.txt","r");
	if(fp!=NULL){
		while(!feof(fp)){
			fscanf(fp,"%d ",&num[n]); //read txt file to store in varieble num;
			n++;
		}
		fclose(fp);
	}
	else
	puts("File not found");
}
void output(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	puts("");
}
void overwrite(int num[],int n){
	FILE *fp;
	fp=fopen("number.txt","w");
	for(int i=0;i<n;i++)
		fprintf(fp,"%d ",num[i]); // read value varieble to store in txt file
	fclose(fp);
}
int main(){
	int a;
	int num[20];
	int n=0;
	read_to_array(num,n);
	output(num,n);
	printf("Delete number: ");
	scanf("%d",&a);
	for(int i=0;i<n;i++)
		if(num[i]==a){
			n=n-1;
			for(int j=i;j<n;j++)
				num[j]=num[j+1];
			i--;
		}
	output(num,n);
	overwrite(num,n);
	return 0;
}
