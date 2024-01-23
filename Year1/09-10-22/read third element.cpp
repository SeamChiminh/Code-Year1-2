//fseek(FILE*, offset, SEEK);
//SEEK : SEEK_SET 0
	// SEEK_CUR 1
	// SEEK_END 2
//read third element of binary file
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int num;
	
	fp = fopen ("number.bin","rb");
	fseek(fp,0*sizeof(int),0); // move file printer to first element
	fread(&num,sizeof(int),1,fp);
	printf("The third element is %d\n",num);
	
	fseek(fp,- sizeof(int),2);// move file printer to last element
	fread(&num,sizeof(int),1,fp);
	printf("The last element is %d",num);
	
	fclose(fp);
	getch();
}