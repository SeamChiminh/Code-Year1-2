#include<iostream>
#include<conio.h>
using namespace std;

typedef struct { int id,qty,post;
					double price;
					char name[30];
				}stock;

void add(stock s){
	cout << "=== Add Stock ===" << endl;
	cout << "ID    : ";
	cin >> s.id;
	cout << "Name  : ";
	cin >> s.name;
	cout << "Qty   : ";
	cin >> s.qty;
	cout << "Price : ";
	cin >> s.price;
	cout << "Post  : ";
	cin >> s.post;
	
	
}




int main(){
	stock st;
	add(st);
	
	getch();
}