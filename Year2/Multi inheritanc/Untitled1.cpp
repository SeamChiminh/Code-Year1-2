//#include <iostream>
//using namespace std;
//class B {
//  protected:
//   int x;
//  public:
//   B(int x=0):x(x){}
//   void setx(int xx){ x=xx;}
//   int getx() const {return x;}
//};
//class C {
//  protected:
//   int y;
//  public:
//   C(int y=0): y(y) { }
//   void sety(int yy){ y=yy; }
//   int gety() const {return y;}
//};
//class D: public B,public C 
//{
//  public:
//   D(int x=0,int y=0)
//   : B(x),C(y){}
//   void print()
//   {
//     cout <<"x=" <<x <<",y=" <<y <<endl;
//   }
//};
//
//int main()
//{
//  D d(5,10);
//  d.print();
//  cout <<string(40,'-') <<endl;
//  d.setx(10);
//  d.sety(-20);
//  cout <<"x=" << d.getx() <<",y=" <<d.gety() <<endl;
//  
//  d.print();
//  
//}
//ex2: multiple inheritance has overided methods
#include <iostream>
using namespace std;
class B {
  protected:
   int x;
  public:
   B(int x=0):x(x){}
   void setx(int xx){ x=xx;}
   int getx() const {return x;}
   void input() {
   }
   void print() {
   }
};
class C {
  protected:
   int y;
  public:
   C(int y=0): y(y) { }
   void sety(int yy){ y=yy; }
   int gety() const {return y;}
   void input() {
     
   }
   void print() {
     
   }
};
class D: public B,public C 
{
  public:
   D(int x=0,int y=0)
   : B(x),C(y){}
   // B::input(); B::print(); B::setx(int); B::getx()
   // C::input(); C::print(); C::sety(int); C::gety()
   
   int findmax3() {
     int max3;
     max3=(x<y)?y:x;
     return (max3<z)?z:max3;
   }
   
};
==> create object of derived D 
  D d(10,20,30);
   d.print(); // Error ==> Ambiguous
   d.input(); // Error ==> Ambiguous
   d.print(); // Error ==> Ambiguous
in this case, we have two solutions
 1. accessing overrided methods using scope(::)
    obj.Baseclass::method();
    d.B::print();
    d.C::print();
    //..
    d.B::input();
    d.C::input();
    d.B::print();
    d.C::print();
    //..
    
int main()
{
  D d(5,10,30);
  d.B::print();
  d.C::print();
  cout <<string(40,'-') <<endl;
  d.B::input();
  d.C::input();
  //..
  d.B::print();
  d.C::print();
}

2. create input() and print() method of derived class
   D then call overrided methods inside.
   class D: public B, public C
   {
      ...
      public:
      ...
     void input(){
       B::input();
       C::input();
       cout <<"input z ? "; cin>>z;
   }
   void print() {
     B::print();
     C::print();
     cout <<"z=" <<z <<endl;
     cout <<"max3=" <<findmax3() <<endl;
   }
   };
   
   create object of derived D
   D d(20,30,-30);
   d.print(); // D::print() is a print() of D
   //.
   d.input(); // D::input() 
   d.print(); // D::print()
   
ex2. design class as multiple inheritance
  class person {};
  class subject{};
  class exam: public person,public subject{};
ex3. design class as multiple inheritance
  class person{string name; char sex;};
  class seller{float sell_amount};
  class overtime{float hour,rate,salary;};
  class employee:public person,public seller,overtime
  {  private:
      string company;
      float commission, totalsalary;
     public:
       ?
    
  }