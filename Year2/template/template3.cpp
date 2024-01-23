// class template 
#include <iostream>
#include <typeinfo>
using namespace std;
template<class T>
class sample {
  T v;
  public:
   sample()=default;
   sample(T arg): v(arg){}
   void setV(T arg){
     v=arg;
   }
   T getV() const {return v;}
   T square() {
     return v*v;
   }
   void print() {
     if(typeid(T)==typeid(int))
       cout <<"type : integer" <<endl;
     else if(typeid(T)==typeid(char))
       cout <<"type : char"  <<endl;
    else if(typeid(T)==typeid(float))
       cout <<"type : float"  <<endl;
      else if(typeid(T)==typeid(string))
       cout <<"type : string"  <<endl;
     cout <<"v=" <<v <<endl;
     cout <<string(30,'-') <<endl;
     
   }
};

template <>
class sample<string>
{
  string v;
  public:
  sample() =default;
  sample(string s1):v(s1) {}
  void setV(string s1){
    v=s1;
  }
  string getV()const {return v;}
    void print() {
    cout <<"type string : " <<endl;
    cout <<"v=" << v <<endl;
  }
  string square() {
    return "square of ( "+v+") is "+(v+v);
  }
};

int main() {
  sample <int>i(100);
  sample<char>c('z');
  sample<float>f (4.5);
  sample<string>s("hello c++");
  i.print();
  cout <<"square =" << i.square() <<endl;
  c.print();
  f.print();
  s.print();
   cout <<s.square() <<endl;
  //.
  
}