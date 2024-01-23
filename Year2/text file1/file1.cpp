#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
//ការរក្សាទុកទិន្នន័យជា​ File មានប្រភេទ ជាTXT 
void writeFile()
{
	ofstream A;
	A.open("Product.txt", ios::out | ios::app); 
	
	string item;
	int qty;
	double price;
	
	cout << "____________Add Product_____________" << endl << endl;
	cout << "Item   : ";
	getline(cin, item);
	
	cout << "Qty    : "; fflush(stdin);
	cin >> qty;
	
	cout << "Price  : ";
	cin >> price;
	
	cout << endl;
	// cout << item << "\t" << qty << "\t" << price << endl; // display on consul
	cout << "File has been saved..." << endl;
	
	A << item << "\t" << qty << "\t" << price << endl; // write to file txt
	
	//close file
	A.close(); 
}

void readFile()
{
	ifstream A; //Read file
	A.open("Product.txt", ios::in); // read file from txt
	
	string Record;
	do{

		getline(A, Record);
		cout << Record ;

	}while(A.eof() == 0); //ប្រសិនបើអស់ data វានឹងឈប់
	
	A.close();
}

int main()
{
	writeFile();
	readFile();
	
	getch();
	return 0;
}