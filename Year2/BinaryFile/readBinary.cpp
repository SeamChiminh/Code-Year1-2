#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string myname;
    char mygender;
    int myage;
    float mysalary;

    getline(rf ,myname, ',');
    rf.read((char*)&mygender, sizeof(char));
    rf.read((char*)&myage, sizeof(int));
    rf.read((char*)&mysalary, sizeof(float));

    cout << "Name = " << myname << endl;
    cout << "Gender = " << mygender << endl;
    cout << "age =" << myage << endl;
    cout << "Salary = " << mysalary  << endl;

    rf.close();
}