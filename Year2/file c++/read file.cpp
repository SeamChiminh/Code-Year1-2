#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const char *filename="myfile_ex1.txt";
	ifstream readf;
	
	readf.open(filename, ios::in);
	if(!readf)
	{
		cout << "Error :  file not found \n";
		exit(0); 
	}
	
	//reading content of file
	cout << "Reading content of file\n";
	
	while(readf.getline(mystring,50))
	{
		cout << mystring << endl;
	}
	
	if(read.eof())
	{
		cout << "file is <EOF> \n";
		readf.close();
	}	
	
	return 0;
}