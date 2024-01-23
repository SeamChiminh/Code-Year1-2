#include <iostream>
#include <iomanip>
using namespace std; 
typedef struct {
  int id;
  char name[20];
  float mark;
} STD;
int main(){
  STD st[]={
   {100,"chan dara",75.00},
   {20,"hok ann",50.00 },
   {3,"chan mony",35.00 }
  };
  
    int n=sizeof(st)/sizeof(st[0]);
    cout <<left;
    cout <<setw(10)<<""<<setw(10)<<"ID"
       <<setw(15)<<"NAME"<<"MARK"<<endl;
    cout <<setw(8)<<""<<string(45,'-')<<endl;
    cout <<fixed<<setprecision(2);
    for(int i=0;i<n; ++i) 
      cout <<setw(10)<<""<<setw(10)<<st[i].id
         <<setw(15)<<st[i].name<<st[i].mark<<endl;
  cout <<setw(8)<<""<<string(45,'-')<<endl;
  cout << setw(8) << n << string(46,'*') << endl;
}