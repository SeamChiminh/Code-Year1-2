#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
//Binary file

 fstream file; // file => object stream
    char item[25] = "";
    int qty = 0;
    double price = 0;
    int barcode = 0;

void writeBinary()
{
   
    file.open("Product.bin", ios::out | ios::app | ios::binary); // ios::binary ដាក់ក៏បានអត់ក៏បាន

    //សំគាល់ការប្រើ string ក្នុងbinary file អាចមានដំណើរការមិនត្រឹមត្រូវ
    //គួរប្រើ char ជំនួសវិញ
    
    cout << "____________Add Product__________\n";
    cout << "Item name : ";
    cin.get(item, 25); //ប្រើបានតែជាមួយ char arry តែប៉ុណ្ណោះ

    cout << "Barcode   : "; fflush(stdin); cin.clear();
    cin >> barcode;

    cout << "Qty       : "; 
    cin >> qty;

    cout << "Price     : ";
    cin >> price;

    //write file to binary file=> objstream.write( (char*)&var, sizeof(var));
    file.write((char*)&barcode, sizeof(barcode));
    file.write((char*)&item, sizeof(item));
    file.write((char*)&qty, sizeof(qty));
    file.write((char*)&price, sizeof(price));

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
            file.read((char*)&barcode, sizeof(barcode));
            file.read((char*)&item, sizeof(item));
            file.read((char*)&qty, sizeof(qty));
            file.read((char*)&price, sizeof(price));

        while(file.eof() != true)//បើជាមានfileវានឹងធ្វើ
        {   
            //output
            cout << left;
            cout << setw(5) << barcode << setw(15) << item << setw(5) << qty ;
            cout << setw(10) << price << setw(5) << qty*price << endl;
            
            //second read​ យើងធ្វើបែបនេះដើម្បី កុំអោយវាបង្ហាញទិន្នន័យស្ទួនគ្នា ត្រូវដាក់២ដង
            file.read((char*)&barcode, sizeof(barcode));
            file.read((char*)&item, sizeof(item));
            file.read((char*)&qty, sizeof(qty));
            file.read((char*)&price, sizeof(price));
        }
    }

    file.close();
}
int main()
{

    //writeBinary();
    readbinary();
    getch();
    return 0;
}

