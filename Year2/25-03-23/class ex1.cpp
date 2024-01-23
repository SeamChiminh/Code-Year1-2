#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class point {
  private:
   int x,y;
   int getvalue(const char *);
  public:
   void setx(int );
   void sety(int );
   int getx() const;
   int gety() const; 
   void input();
   void print();
};
// write function definitions outside class
int point::getvalue(const char *msg){
  int v;
  while(1){
    cout <<msg;
    cin>>v;
    if(cin.fail()){
      cout <<"Sorry wrong format..."<<endl;
      cin.clear();
      cin.ignore(100,'\n');
    }
    else if(v<=0) 
      cout <<"Sorry "<<v<<" <=0 ot yok......"<<endl;
    else break;
  }
  return v;
}
void point::setx(int xx){
  x=xx;
}
void point::sety(int yy){
  y=yy;
}
int point::getx()const{
  return x;
}
int point::gety()const{
  return y;
}
void point::input(){
  x=getvalue("input x >0 ?");
  y=getvalue("input y >0 ?");
}
void point::print(){
  cout <<"x=" <<x <<",y="<<y <<endl;
}

int main() {
  int x1[5]={5,3,6,4,6};
  int y1[5]={6,4,7,3,4};
  //...
  int x2[5]={7,12,10,11,15};
  int y2[5]={9,14,12,15,17};
  //..
  point p1[5],p2[5];
    for(int i=0;i<5; ++i) 
    {
      p1[i].setx(x1[i]);
      p1[i].sety(y1[i]);
      //..
      p2[i].setx(x2[i]);
      p2[i].sety(y2[i]);
  }
  cout <<"object p1" <<endl;
  for(int i=0;i<5; ++i) 
    p1[i].print();
  cout <<endl;
  cout <<"object p2" <<endl;
  for(int i=0;i<5; ++i) 
    p2[i].print();
  cout <<endl;
  char s1[20],s2[20];
  double d;
  cout <<left<<setw(13)<<"point(x,y)"<<setw(16)<<"point(x,y)"<<"Distance"<<endl;
  cout <<string(50,'-') <<endl;
  for(int i=0;i<5; ++i){
    sprintf(s1,"(%d,%d)",x1[i],y1[i]);
    sprintf(s2,"(%d,%d)",x2[i],y2[i]);
    d=sqrt(pow((x2[i]-x1[i]),2)+pow((y2[i]-y1[i]),2));
    cout <<fixed<<setprecision(2);
    cout <<left <<setw(3)<<""<<setw(13)<<s1 <<setw(13)<<s2<<d <<endl;
  }
  cout <<string(50,'-') <<endl;
  
  
}