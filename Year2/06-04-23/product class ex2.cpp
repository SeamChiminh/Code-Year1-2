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
		//ex1
		product();
		product(const char name[],int qty ,float price );
				
		char *getname();	
		float getAmount();
		
		void input();
		void output();
		
		//ex2
		void inputproduct(product pr[],int n);
	    void outputproduct(product pr[],int n);
	    
	    float totalAmount(product pr[],int n);
	    product *getMaxAmount(product pr[],int n);
	    
		void search(product pr[],int n);
		void updateProduct(const char *byname,product pr[],int n);
		
	  	void sortAmount(product pr[],int n);
	  	void insertProduct(product newp, int atpos,product pr[],int &n);
	  	void deleteProduct(int delpos,product pr[],int &n);
	
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
	
	
	//ex2
	void product::inputproduct(product pr[],int n)
	{
		cout << "Input n : ";
		cin >> n;
		
		for(int i=0; i<n; i++)
		{
			cout << "Enter Numbers of product " << i+1 << ":" << endl;
	        pr[i].input();
	        cout << endl;
		}
	}
		
	void product::outputproduct(product pr[],int n)
    {
 		for(int i=0; i<n; i++) 
		{
	        cout << "Numbers of product " << i+1 << ":" << endl;
	        pr[i].output();
	        cout << endl;
    	}
    }
	    
	float product::totalAmount(product pr[],int n)
	{
		float total = 0.0;
    	for(int i=0; i<n; i++) 
		{
        	total += pr[i].getAmount();
    	}
    	return total;
  	}
  	
  	product *getMaxAmount(product *pr[],int n)
  	{
  		
	}
	
	void product::search(product pr[],int n)
	{
		
	}
	
	void product::updateProduct(const char *byname,product pr[],int n)
	{
		
	}
		
  	void product::sortAmount(product pr[],int n)
  	{
  			
	}
	
  	void product::insertProduct(product newp, int atpos,product pr[],int &n)
  	{
  			
	}
  	void product::deleteProduct(int delpos,product pr[],int &n)
  	{
  		
	}
	void menu()
	{
		cout << "============================" << endl;
		cout << "===>> Wecome to Product <<==" << endl;
		cout << "============================" << endl << endl;
		
		int choice;
		
		cout << "1. Input Product" << endl;
		cout << "2. Output Product " << endl;
		cout << "3. Search Product" << endl;
		cout << "4. Update Product" << endl;
		cout << "5. Sort Product " << endl;
		cout << "6. Insert NewProduct" << endl;
		cout << "7. Delete Product" << endl;
		
		cout << "choose: " ; cin >> choice;
		
		switch(choice)
		{
			case 1:
				
		}
		
		
	}
int main()
{	
	//ex1
	//2. create 2 different objects..
	//product p1("coca cola",3,1.2);
	//product p2;
	
	//3. printing 2 objects on screen..
	//p1.output();
	//p2.input();
	//p2.output();
	
	//ex2
	product inputproduct();
	getch();
}