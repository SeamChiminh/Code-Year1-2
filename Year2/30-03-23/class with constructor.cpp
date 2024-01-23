#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class product
{
	private:
		char name[30];
		int qty;
		float price, total;
		
	public:
		
		void setname(char name[30])
		{
			strcpy(this -> name, name);
		}
		
		void setqty(int qty)
		{
			this -> qty = qty;
		}
		
		void setprice(float price)
		{
			this -> price = price;
		}
		
		void settotal(float total)
		{
			this -> total = total;
		}
		
		char *getname()
		{
			return name;
		}
		
		int getqty() 
		{
			return qty;
		}
		
		float getprice()
		{
			return price;
		}
		
		float gettotal()
		{
			return total = qty * price;
		}
		
		void input()
		{
			cout << "====== Input Product ======" << endl;
			
			cout << "input Name : ";
			cin.getline(name,30);
			
			cout << "input qty  : ";
			cin >> qty; cin.sync();
			
			cout << "input price : ";
			cin >> price; fflush(stdin);
						
		}
};

	product getproduct()
	{
		product obj;
		obj.input();
		
		return obj;
	}

	void printproduct(product p)
	{
		cout << endl << endl;
		cout << "========= Output Data Of Product ===========" << endl;
		
		cout << left;
		cout << setw(20) << "Name" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total" << endl;
		cout << setw(20) << p.getname() << setw(10) << p.getqty() << setw(10) << p.getprice() << setw(10) << p.gettotal() << endl << endl;
		
		cout << string(44,'=') << endl;
	}
	
	product *getproductmore()
	{
		product *obj;
		
		obj = new product();
		
		obj -> input();
		return obj;
	}
	
	void printproductmore(product *p)
	{
		cout << endl << endl;
		cout << "========= Output Data Of Product More ===========" << endl;
		
		cout << left;
		cout << setw(20) << "Name" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total" << endl;
		cout << setw(20) << p->getname() << setw(10) << p->getqty() << setw(10) << p->getprice() << setw(10) << p->gettotal() << endl << endl;
		
		cout << string(44,'=') << endl;
	}

int main()
{
	product p1;
	
	p1 = getproduct();
	printproduct(p1);
	
	product *pr = NULL;
	
	cout << "this is product more" << endl;
	
	pr = getproductmore();
	
	printproductmore(pr);
	
	delete pr;

	getch();
}