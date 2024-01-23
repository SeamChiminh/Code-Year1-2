#include<iostream>
#include<conio.h>
#include<fstream> //header file
using namespace std;
//file: text file

void writeAsText()
{
	ofstream a; // file -> object of write and read
	
	a.open("StudentInfo.txt", ios::out | ios::app); // ios::out = write new file only 
	
	char name[25];
	char gender;
	int age;
	string from;
	
	cout << "___________Add student__________" << endl << endl;
	
	cout << "name  : ";
	cin.get(name, 25);
	
	cout << "gender: ";
	cin >> gender;
	
	cout << "age   : "; fflush(stdin);
	cin >> age; 
	
	cout << "from  : ";fflush(stdin);
	getline(cin, from);
	
	cout << endl;
	cout << name << "\t" << gender << "\t" << age << "\t" << from << endl;
	
	a << name << "\t" << gender << "\t" << age << "\t" << from << endl; //write data to file
	cout << "file is inserted successfully..." << endl;
	
	//close file
	a.close();
	
}

void readAsText()
{
	//open file for read
	
	ifstream a; //reader -> object stream
	
	a.open("StudentInfor.txt", ios::in); //ios::in = read file
	
	//have string variable to store data 
	string record;
	
	while(1) // true
	{
		if(a.eof()) break;

			getline(a, record);
			cout << record << endl;
		
	}
	
	a.close();
	
	
}

int main()
{
	
	writeAsText();
	readAsText();
	
	getch();
	return 0;
}