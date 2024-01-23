#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

class student {
  private:
    char name[30];
    char sex;
    float average;
  public:
    student(const char *nm="null", char sx='m', float avg=0.0);
    const char *getname()const ;
    float getaverage()const;
    void input();
    void print();
};

student::student(const char *nm, char sex, float average)
: average(average),sex(sex)
{
    strcpy(name,nm);
}

void student::input() 
{
    cout <<"enter student name : "; cin.sync();
    cin.getline(name,30);
    cout <<"enter student sex  : "; sex=cin.get();
    cout <<"enter student average:"; cin>>average;
}
const char *student::getname() const {return name;}
float student::getaverage()const{return average;}

void student::print()
{
    cout <<left<<fixed<<setprecision(2) <<setw(12)<<name<<setw(4)<<sex<<average <<endl;  
}

int main()
{
  /*student s[3]={{"sok chan",'m',50.00},
                {"heng heng",'m',50.00},
          {"chan chan",'f',90}
          };
  */
    student s1("Chiminh",'F',99.00);
    const char *filename="mystudent.dat";
    ofstream wf(filename,ios::binary|ios::out);

    if(!wf)
    {
        cout <<"Error: can not create file\n";
        exit(0);
    }

    cout <<"write an object of student to a binary file"<<endl;

    s1.print();
    wf.write((char *)&s1,sizeof(s1));

    cout <<string(40,'-') <<endl;  
    wf.close();

    student myst;
    ifstream rf(filename,ios::binary|ios::in);

    if(!rf)
    {
        cout <<"Error: file not found\n";
        exit(0);
    }
    system("pause");
    cout <<"Reading an object from file\n";
    rf.read((char *)&myst,sizeof(myst));
    myst.print();
    cout <<string(40,'-') <<endl;
    rf.close();
}