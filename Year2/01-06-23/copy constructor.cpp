//copy constructor 
#include <iostream>
using namespace std;
class point {
  private:
   int x,y;
  public:
   point(int=0,int=0); // constructor
   point(const point &); //copy constructor
   void operator=(const point &);// assignment operator(=)
   void setx(int);
   void sety(int);
   void input();
   void print();
};
point::point(int xx,int yy)
	{ 
		x=xx; y=yy;
	}
point::point(const point &right)
{
  x=right.x;
  y=right.y;
  cout <<"calling copy constructor...\n";
}
void point::operator=(const point &right)
{
  x=right.x;
  y=right.y;
  cout <<"calling assignment operator(=)"<<endl;
}
void point::setx(int xx){
  x=xx;
}
void point::sety(int yy){
  y=yy;
}
void point::input() {
  cout <<"input x="; cin>>x;
  cout <<"input y="; cin>>y;
}
void point::print(){
  cout <<"x=" <<x<<",y="<<y <<endl;
}
//2.calling copy constructor
void printPoint(point p){ // passing obj to function
  p.print();
}

//3. calling copy constructor : return obj from function
point getpoint(point p){
  p.input();
  return p;
}
int main(){
  point p1(3,5),p3;
  //point p2(p1); // using copy constructor
  point p2=p1;
  printPoint(p1);
  printPoint(p2);
  //p1.print();
  //p2.print();
  // set new data to p2
  p2.setx(10);
  p2.sety(20);
  //... 
  printPoint(p1);
  printPoint(p2);
  p3=p1; // calling assignment operator(=)
         // p3.operator=(p1);
  point p=getpoint(p1); // calling copy constructor
  printPoint(p); // calling copy constructor
  
  
}