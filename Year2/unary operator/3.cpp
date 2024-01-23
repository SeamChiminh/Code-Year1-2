#include <iostream>
using namespace std;
class Number {
  private:
   int num;
  public:
   Number(int num=0): num(num){}
   void setnum(int num){this->num=num;}
   int getnum() const {return num;}
   void print(){
     cout <<"num=" << num <<endl;
   }
   int operator+() {
     //cout <<"calling operator+()" <<endl;
     if(num<0) 
       num=-1*num;
     return num;
   }
   int operator-() {
     cout <<"calling operator-()" <<endl;
     num=-1*num;
     return num;
   }
   // prefix increment operator++()
   int operator++() {
     //cout <<"calling operator++()" <<endl;
     return ++num;
   }
   int operator--() {
     //cout <<"calling operator--()" <<endl;
     return --num;
     }
     int operator++(int) {
       //return num++;
       int x=num;
       ++num;
       return x;
   }
   int operator--(int) {
     return num--;
   }
};
int main(){
  Number a(10);
  int n;
  a.print(); // num=10
  n=a++;// n=a.operator++(0);
  cout <<"n=" << n <<endl;
  a.print();
  n=a--; // n=a.operator--(0);
  cout <<"n=" << n <<endl;
  a.print();
  cout <<string(40,'-') <<endl;
  for(int i=0;i<10; ++i)
  {
    a--;
    a.print();
    
  }

}