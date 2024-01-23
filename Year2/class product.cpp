#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Product
{
	private:
		string item;
		int qty;
	protected:
		double price;
	public:
		//method
		void Display()
		{
			cout << "______________Display Invoice__________________" << endl << endl ;
			cout << left;
			cout << setw(20) << "Item Name" << setw(12) << "Price" << setw(12) << "Qty" << setw(12) << "Amount"<< endl;
			cout << fixed << setprecision(2); //kat kbeas 2 ktong
			cout << setw(20) << item << setw(12) << price << setw(12) << qty << "$" << setw(12) << getAmount() << endl;
		}	
		
		double getAmount()
		{
			return qty * price;
		}
		
		void setProduct(string item, double p, int q)
		{
			this -> item = item;
			price = p;
			qty = q;
		}
		
		void input()
		{
			cout << "__________Add Product__________" << endl << endl;
			cout <<"Input Product Name : ";
			getline(cin, item);fflush(stdin);
			cout << "Input Price       : $";
			cin >> price;
			cout << "Input Qty         : ";
			cin >> qty;
		}
};

int main()
{
	Product A; // normal object
	
	A.setProduct("Coca", 1.2, 3);
	A.input();
	A.Display();
	
	getch();
	return 0;
}