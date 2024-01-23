#include<iostream>
#include<typeinfo> //for displat data type
using namespace std;

template < class T>
class sample
{
	T v;
	public:
		sample()=default;
		sample(T v1):v(v1){}
		void setv(T v1) {v=v1;}
		T getv()const {return v;}
		T square()
		{
			return v*v;	
		}
		string square()
		{
			return "squar of ("+v+") is "+(v+v) ;
		}
		void print()
		{
			if(typeid(T)==typeid(int))
				cout << "type= int get ...\n";
			else if(typeid(T)==typeid(char))
				cout << "type: class ...\n";
			else if(typeid(T)==typeid(float))
				cout << "type: float... \n";
			else if(typeid(T)==typeid(string))
				cout << "type: string...\n";
			else 
				cout << string(30,'-') << endl;
		}
		
};
int main()
{
	sample <int> i(100);
	sample <char> c ('z');
	sample <float> f (12.02);
	sample <string> s ("hello c++");
	
	i.print();
	cout << "square = " << i.square() << endl;
	c.print();
	f.print();
	s.print();
	
	
}