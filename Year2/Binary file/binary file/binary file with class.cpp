#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<windows.h>
#include "password.h"
using namespace std;
//Binary file
 fstream file; // file => object stream

class Product
{
    public:
         char item[25] = "";
        int qty = 0;
        double price = 0;
        int barcode = 0;
};
Product p;

void writeBinary()
{
   
    file.open("Product.bin", ios::out | ios::app | ios::binary); // ios::binary ដាក់ក៏បានអត់ក៏បាន

    //សំគាល់ការប្រើ string ក្នុងbinary file អាចមានដំណើរការមិនត្រឹមត្រូវ
    //គួរប្រើ char ជំនួសវិញ
    
    cout << "Barcode   : "; fflush(stdin); cin.clear();
    cin >> p.barcode;
    
    cout << "____________Add Product__________\n";
    cout << "Item name : "; fflush(stdin); cin.clear();
    cin.get(p.item, 25); //ប្រើបានតែជាមួយ char arry តែប៉ុណ្ណោះ

    cout << "Qty       : "; 
    cin >> p.qty;

    cout << "Price     : ";
    cin >> p.price;

    //write file to binary file=> objstream.write( (char*)&var, sizeof(var));
    file.write((char*)&p, sizeof(p));

    file.close();

}

void readbinary()
{
    file.open("Product.bin", ios::in | ios::binary);
    //write file => objstream.read( (char*)&var, sizeof(var));
    //validated file បញ្ជាក់ពីការរកឃើញfile និងអត់ឃើញfile ពេលយើងសរសេរឈ្មោះfileខុស
    if(file.fail())
    {
        cout << "File is not found ! " << endl;
    }
    
    if(file.good())
    {
            //read to file binary
            //fist read យើងធ្វើបែបនេះដើម្បី កុំអោយវាបង្ហាញទិន្នន័យស្ទួនគ្នា ដែលជាការដាក់បញ្ឆោត
            file.read((char*)&p, sizeof(p));
            

        while(file.eof() != true)//បើជាមានfileវានឹងធ្វើ
        {   
            //output
            cout << left;
            cout << setw(5) << p.barcode << setw(15) << p.item << setw(5) << p.qty ;
            cout << setw(10) << p.price << setw(5) << p.qty*p.price << endl;
            
            //second read​ យើងធ្វើបែបនេះដើម្បី កុំអោយវាបង្ហាញទិន្នន័យស្ទួនគ្នា ត្រូវដាក់២ដង
            file.read((char*)&p, sizeof(p));
            
        }
    }

    file.close();
}

void Update()
{
    //open file
    file.open("Product.bin", ios::in | ios::out | ios::binary);
    
    //write file => objstream.read( (char*)&var, sizeof(var));
    //validated file បញ្ជាក់ពីការរកឃើញfile និងអត់ឃើញfile ពេលយើងសរសេរឈ្មោះfileខុស
    if(file.fail())
    {
        cout << "File is not found ! " << endl;
    }
    
    if(file.good())
    {
        int upbarcod = 0;
        cout << "input barcode : ";
        cin >> upbarcod;

        //read to file binary
        //fist read យើងធ្វើបែបនេះដើម្បី កុំអោយវាបង្ហាញទិន្នន័យស្ទួនគ្នា ដែលជាការដាក់បញ្ឆោត
        file.read((char*)&p, sizeof(p));

        while(file.eof() != true)//បើជាមានfileវានឹងធ្វើ
        {   
            if(upbarcod == p.barcode)
            {
                //tellg = ប្រើសម្រាប់ចាប់យកតម្លៃដែលយើង read ថាយើង read​ ដល់Byte​ណា
                int size = file.tellg();

                cout << "____________Update__________\n";
                cout << "Barcode   : " << p.barcode << endl; 

                cout << "Item name : "; fflush(stdin); cin.clear();
                cin.get(p.item, 25); //ប្រើបានតែជាមួយ char arry តែប៉ុណ្ណោះ

                cout << "Qty       : "; fflush(stdin); cin.clear();
                cin >> p.qty;

                cout << "Price     : ";
                cin >> p.price;
            
                file.seekp(size - sizeof(p));//set ទីតាំងដើម្បី update

                file.write((char*)&p, sizeof(p));
            }
            file.read((char*)&p, sizeof(p));
        }
    }

    file.close();
}

void Delete()
{
	ofstream backup;
	bool isDeleted = false;
	 //open file
    file.open("Product.bin", ios::in | ios::out | ios::binary);
    backup.open("Temfile.bin", ios::out | ios::binary);
    
    //write file => objstream.read( (char*)&var, sizeof(var));
    //validated file បញ្ជាក់ពីការរកឃើញfile និងអត់ឃើញfile ពេលយើងសរសេរឈ្មោះfileខុស
    if(file.fail())
    {
        cout << "File is not found ! " << endl;
    }
    
    if(file.good())
    {
        int deletebar;
        cout << "input barcode : ";
        cin >> deletebar;

        //read to file binary
        //fist read យើងធ្វើបែបនេះដើម្បី កុំអោយវាបង្ហាញទិន្នន័យស្ទួនគ្នា ដែលជាការដាក់បញ្ឆោត
        file.read((char*)&p, sizeof(p));

        while(file.eof() != true)//បើជាមានfileវានឹងធ្វើ
        {   
            if(deletebar == p.barcode)
            {
			
            	deletebar = true;    
            }
            else
            {
            	//backup date ដែលមិនដូចគ្នា
            	backup.write((char*)&p, sizeof(p));
			}
            file.read((char*)&p, sizeof(p));
        }
        if(deletebar == true)
        {
        	cout << "File has been deleted.. " << endl;
		}
		if(deletebar == false)
		{
				cout << "invalib barcode" << endl;
		}
        
    }

    file.close();
    backup.close();
    remove("Product.bin");
    rename("Temfile.bin", "Product.bin");
}

void menu()
{
    int choice = 0;
    A:
	system("cls");
    cout << "====================================" << endl;
    cout << "               Menu                 " << endl;
    cout << "====================================" << endl;
    cout << "            1. Add Record           " << endl;
    cout << "            2. View Record          " << endl;
    cout << "            3. Update               " << endl;
    cout << "            4. Delete               " << endl;
    cout << "            5. Exit                 " << endl;
    cout << "====================================" << endl;

    cout << "Choose : ";fflush(stdin); cin.clear();
    cin >> choice;

    switch(choice)
    {
        case 1:
                system("cls");
                writeBinary();
                cout << "Press any key for back" << endl;
                getch();
                goto A;
        case 2:
                system("cls");
                readbinary();
                cout << "Press any key for back" << endl;
                getch();
                goto A;
        case 3:
                system("cls");
                Update();
                cout << "Press any key for back" << endl;
                getch();
                goto A;
        case 4:
        		system("cls");
        		Delete();
        		cout << "Press any key for back" << endl;
                getch();
                goto A;
        case 5:
                system("cls");
                cout << "Thanks for using my app" << endl;
                getch();
                exit(0);
        default:
                cout << "Please [enter] again." << endl;
                getch();
                goto A;
    }
}

void login()
{
    while(1)
    {
        char username[25];
        char password[25];

        system("cls");
        cout << "Enter username : ";
        cin >> username; 
        cout << "Enter password : ";//fflush(stdin);
        passwordChar(password);

        //condition

        if(!strcmp(username, "Admin") && !strcmp(password, "1234"))
        {
            system("cls");
            menu();
        }

        else if(strcmp(username, "Admin") && strcmp(password, "1234"))
        {
            cout << "Error: username and password are invlid!!" << endl;
        }

        else if(strcmp(username, "Admin"))
        {
            cout << "Error: Username is invlid!!" << endl;
        }

        else if(strcmp(password, "1234"))
        {
            cout << "Error: password is invlid!!" << endl;
        }

        
    }
}
int main()
{
    login();

    
    getch();
    return 0;
}

