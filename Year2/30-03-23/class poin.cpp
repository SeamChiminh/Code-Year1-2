#include <iostream>
#include <cmath>
using namespace std;
class point{
  private:
   int x,y;
  public:
   point(){  // default constructor
     x=y=0;  // initialize data variables
     //cout <<"calling default constructor"<<endl;
   }
   void setx(int xx){
     x=xx;
   }
   void sety(int yy){
     y=yy;
   }
   int getx()const{
     return x;
   }
   int gety()const {
     return y;
    }
   void input(){
     cout<<"====input point====="<<endl;
     cout <<"input x ="; cin>>x;
     cout <<"input y ="; cin>>y;
   }
   void print(){
     cout <<"(x="<<x<<",y="<<y<<")"<<endl;
   }
};

int main(){
  point pp1,pp2;
  pp1.setx(5);
  pp1.sety(9);
  //.
  pp2.setx(10);
  pp2.sety(12);
  cout <<"object pp1"<<endl;
  pp1.print();
  cout <<"object pp2"<<endl;
  pp2.print();
  
  int x1[5]={5,4,7,9,10};
  int y1[5]={7,8,10,12,21};
  //..
  int x2[5]={7,10,9,12,16};
  int y2[5]={8,9,12,21,20};
  //..
  point p1[5],p2[5];
  for(int i=0;i<5; ++i) 
  {  p1[i].setx(x1[i]);
     p1[i].sety(y1[i]);
     //..
     p2[i].setx(x2[i]);
     p2[i].sety(y2[i]);
    
  }
  cout<<"5 array objects p1\n";
  for(int i=0;i<5; ++i) 
  {
    cout<<"p1["<<i<<"]:"; p1[i].print();
    }    
  cout <<endl;
  cout <<"5 array objects p2\n";
  for(int i=0;i<5; ++i) {
    cout <<"p2["<<i<<"]:";
    p2[i].print();
  }
  cout <<endl;
  
