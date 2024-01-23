#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class product
{
	private:
		char name[30];
		int qty;
		float price, amount;
		
	public:
		
		product();
		product(const char name[],int qty ,float price );
		
		char *getname();	
		float getAmount();
		
		void input();
		void output();
	
};
	//1.Definitions outside class:
	product::product()
	{
		strcpy(name,"N/A"); // == NULL
		qty = 0;
		price= 0.0;
		amount = qty * price;
	}
	
	product::product(const char name[],int qty ,float price )
	{
		strcpy(this -> name,name);
		this -> qty = qty;
		this -> price = price;
	}
	
	char* product::getname()
	{
		return name;
	}
	
	float product::getAmount()
	{
		return amount = qty * price;
	}
	
	void product::input()
	{
		cout << "====== Input Product ======" << endl;
		
		cout << "input Name  : ";
		cin.getline(name,30);
		
		cout << "input qty   : ";
		cin >> qty; cin.sync();
		
		cout << "input price : ";
		cin >> price; fflush(stdin);			
	}
		
	void product::output()
	{
		cout << endl << endl;
		cout << "========== Output Data Of Product ============" << endl;
		
		cout << left;
		cout << setw(20) << "Name" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Amount" << endl;
		cout << setw(20) << getname() << setw(10) << qty << setw(10) << price << setw(10) << getAmount() << endl;
		cout << string(46,'=') << endl << endl;
	}
	
int main()
{
	//2. create 2 different objects..
	product p1("coca cola",3,1.2);
	product p2;
	
	//3. printing 2 objects on screen..
	p1.output();
	p2.input();
	p2.output();
	
	getch();
}