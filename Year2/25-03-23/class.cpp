// ex1
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class person{
  public:
   char name[20];
   char tel[20];
   float salary;
};
person getperson(){
  person obj;
  cout <<"input name ? "; 
  cin.getline(obj.name,20);
  cout <<"input tel ? ";
  cin.getline(obj.tel,20);
  cout <<"input salar? ";
  cin>>obj.salary; cin.sync();
  return obj;
}
void print(person p){
  cout <<"////////////////////"<<endl;
  cout <<fixed<<setprecision(2);
  cout <<"Name      :" << p.name <<endl;
  cout <<"Tel       :" << p.tel  <<endl;
  cout <<"Salary    : "<< p.salary<<" ($)"<<endl;
  cout <<"/////////////////////"<<endl;
}
int main() {
  person p1,p2,pc;
  //object p1
  strcpy(p1.name,"chan dararith");
  strcpy(p1.tel,"11111111");
  p1.salary=1500.00;
  //object p2
  strcpy(p2.name,"Om van");
  strcpy(p2.tel,"22222222");
  p2.salary=250.00;
  //..
  cout <<"object p1" <<endl;
  print(p1);
  cout <<"object p2" <<endl;
  print(p2);
  // object can be assigned..
  pc=p1;
  cout <<"object pc" <<endl;
  print(pc);
  cout <<"input new data object p1"<<endl;
  p1=getperson();
  cout <<"object p1" <<endl;
  print(p1);
  
}
//..
// ex1
//#include <iostream>
//#include <cstring>
//#include <iomanip>
//using namespace std;
//class person{
//  private:
//   char name[20];
//   char tel[20];
//   float salary;
//   
//  public:
//   void setname(const char name1[]){
//     strcpy(name,name1);
//   }
//   void settel(const char tel1[]){
//     strcpy(tel,tel1);
//   }
//   void setsalary(float salary1){
//     salary=salary1;
//   }
//  char *getname() {
//     return name;
//   }
//  char *gettel() {
//    return tel;
//  }
//  float getsalary(){
//    return salary;
//  }
//  void input(){
//    cout <<"input name ? "; 
//      cin.getline(name,20);
//      cout <<"input tel ? ";
//      cin.getline(tel,20);
//      cout <<"input salar? ";
//      cin>>salary; cin.sync();
//  }
//};
//
//person getperson(){
//  person obj;
//  // 
//  char name1[20],tel1[20];
//  float salary1;
//  cout <<"input name ? "; 
//  cin.getline(name1,20);
//  cout <<"input tel ? ";
//  cin.getline(tel1,20);
//  cout <<"input salar? ";
//  cin>>salary1; cin.sync();
//  obj.setname(name1);
//  obj.settel(tel1);
//  obj.setsalary(salary1);
//  return obj;
//}
//person getperson1(){
//  person obj;
//  obj.input();
//  return obj;
//}
//void print(person p){
//  cout <<"////////////////////"<<endl;
//  cout <<fixed<<setprecision(2);
//  cout <<"Name      :" << p.getname() <<endl;
//  cout <<"Tel       :" << p.gettel()  <<endl;
//  cout <<"Salary    : "<< p.getsalary()<<" ($)"<<endl;
//  cout <<"/////////////////////"<<endl;
//}
//person *getotherperson(){
//  person *obj;
//  obj= new person();
//  // obj= (person *)malloc(sizeof(person));
//  obj->input();
//  return obj;
//}
//void printotherperson(person *p){
//  cout <<fixed<<setprecision(2);
//  cout <<"name     :" << p->getname() <<endl;
//  cout <<"tel      :" << p->gettel()  <<endl;
//  cout <<"salary   :" << p->getsalary() <<endl;
//  cout <<"////////////////////////"<<endl;
//}
//int main() {
//  person p1,p2,pc;
//  //object p1
//  p1.setname("chan dararith");
//  p1.settel("11111111");
//  p1.setsalary(1500.00);
//  //object p2
//  p2.setname("Om van");
//  p2.settel("22222222");
//  p2.setsalary(250.00);
//  //..
//  cout <<"object p1" <<endl;
//  print(p1);
//  cout <<"object p2" <<endl;
//  print(p2);
//  // object can be assigned..
//  pc=p1;
//  cout <<"object pc" <<endl;
//  print(pc);
//  cout <<"input new data object p1"<<endl;
//  p1=getperson();
//  cout <<"object p1" <<endl;
//  print(p1);
//  cout <<"input new data object p2"<<endl;
//  p2=getperson1();
//  cout <<"object p2"<<endl;
//  print(p2);
//  person *ps=NULL;
//  cout <<"input person ps "<<endl;
//  ps=getotherperson();
//  cout <<"object ps" <<endl;
//  printotherperson(ps);
//  delete ps;
//}