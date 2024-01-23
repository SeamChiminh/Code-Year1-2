#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	const char *filename="myfile_ex1.txt";
	ofstream fwrite;
	fwrite.open(filename, ios::out);
	if(!fwrite)
	{
		cout << "Error : can not create file\n";
		exit(0);
	}
	
	cout << "write : hello world c++ to file";
	
	fwrite << "hello world c++\n";
	
	fwrite << "hello c# \n";
	
	fwrite.close();
	return 0;
}