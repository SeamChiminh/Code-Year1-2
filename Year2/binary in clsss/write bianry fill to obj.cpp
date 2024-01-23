#include<iostream>
#include<fstream>
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


void writeStudentFile(const char *filename){
    ofstream wf(filename, ios::binary | ios::out);
    student st;
    if(!wf)
    {
        cout << "error : can not create file " << endl;
        exit(0);
    }

    cout << "write dat obj to a binary file" << endl;
    do{
        cout << "student : " << i << endl;
        st.input();
        cout << "write student dat obj to file" << endl;
        st.print();
        wf.write((char ()&st, sizeof(st)));
        while(cout << "next (y/n)? ", cin.sync(),
        strchr("yn", c=cin.get())==NUll);
        ++i;

    }while (c=='v');
    
}

void readStudentFile(const char *filename){
  ifstream rf(filename, ios::binary | ios::in);
  student myst;
  if(!rf)
  {
    cout << "error : file not found " << endl;
    exit(0);
  }
  cout << "Reading data to obj from a binary file" << endl;
  while(rf.read((char *)&myst, sizeof))
}

void modifyfile(const char *filename)
{
    :fstream f(filename, ios::binary | ios::out | ios::in);
    int num = filesize(filename)/sizeof(studnt);
    int pos;

    cout <<"update or mofity data obj" << endl;
    do{
        cout << "input update or modify pos(0," << num ;
        cin >> pos;
    }while(pos<0 || pos>=num);
    f.seekg(pos*sizeof(student), ios::beg);
    f.read((char *))&st, sizeof(st);
    st.print();
    cout <<"input new dat obj " << endl;
    st.input();
    f.seekp(pos*sizeof(student), ios::beg);
    f.write(char (&))
}

void file_menu()
{
    cout << "======= file menu ============" << endl;
    cout << "1. write file " << endl;
    cout << "2. read file " << endl;
    cout << "3. file size " << endl;
    cout << "4. modify file " << endl;
    cout << "5. eixt " << endl;
}

int main()
{
    student s[5] = {
        {"chan da", 'f', 40.00},
        {"sok mara", 'm', 55.00},
        {"leng luy", 'm', 60.00},
        {"heng kanha", 'f' , 45.00},
        {"danal drum", 'm' , 70.00}
    };

    fstream wf("mystudent.dat", ios::binary | ios::out);
    system("pause");
    cout << "reading obj " << endl;
    ifstream rf("mystudent.dat", ios::binary | ios::out);
    
    for(int i=0; i<5; ++i)
    {
        s[i].print();
        wf.write((char *)&s[i], sizeof(s[i]));

    }
    wr.close();
    system("pause");
    ifstream rf("mystudent.dat", ios::binary | ios::out);
    cout << "reading obj from a binary fill" << endl;

    student myst;
    while(rf.read((char *)&myst, sizeof(myst)))
        myst.print();
    cout <<endl<<">>completely"<<endl;
    rf.close();
    return 0; 

}
