#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ofstream wf("filebin.dat", ios::binary | ios::out);
    string name = "Pu Chhveng";
    char delim=',';
    char gender= 'M';
    int age= 40;
    float salary = 3000.00;

    cout << "write name : " << name << endl;
    wf.write((char*)name.c_str, name.size());
    wf.write((char*)&delim, sizeof(char));

    cout << "write gender = " << gender << endl;
    wf.write((char *)&gender, sizeof(char));

    cout << "write age = " << age << endl;
    wf.write((char*)&age, sizeof(int));
    
    cout << "write salary = " << salary << endl;
    wf.write((char*)&salary ,sizeof(float));

    wf.close();
    
}