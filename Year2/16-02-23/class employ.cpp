#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class employee
{
    private:
        char id[20];
        char name[30];
        char sex;
        float salary;
    public:
        void getinfo();
        void display();
        float tax_salary();
};

void employee::getinfo()
{
    cout << "Enter ID = ";cin.seekg(0);
    cin.get(id,20); cin.seekg(0);
    cout << "Enter Name = ";
    cin.get(name,30);
    cout << "Enter sex  = ";
    cin >> sex; cin.seekg(0);
    cout << "Enter Salary = ";
    cin >> salary;
}
void employee::display()
{
    cout << "ID     = " << id << endl;
    cout << "Name   = " << name << endl;
    cout << "Sex    = " << sex << endl;
    cout << "Salary = $" << salary << endl;
    cout << "Tax    = $" <<  tax_salary() << endl;
    cout << "Total  = " << salary - tax_salary()<< endl;
}
float employee::tax_salary()
{
    float tax;
    if(salary < 350)
    {
        tax = salary * 0.02;
    }
    else if (salary < 750)
    {
        tax = salary * 0.03;
    }
    else 
    {
        tax = salary * 0.05;
    }
    return tax;
}
int main()
{
    employee emp[20];

    int n;
    cout << "Enter n = ";
    cin >> n;
    for(int i = 0; i<n; i++)
    {
         emp[i].getinfo();
    }    
    cout << endl << endl;
    for(int i = 0; i<n; i++)
    {
        emp[i].display();
    }
   
    getch();
    return 0;
}
