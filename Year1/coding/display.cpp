#include<stdio.h>
#include<conio.h>

void display(int,int,int,char[]);//function
void main 
{
	display(1,1,4,"tl");
	display(78,1,2"lr");
	display(37,13,15,"center");
	display(1,25,1,"bl");
	display(78,25,14,"br");
	getch(); 	
}
void display (int x,int y,int c,char st[])
{
	textcolor(c);
	gotoxy(x,y);
	cprintf("%s",st);
}