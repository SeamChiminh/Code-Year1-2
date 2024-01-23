#include<iostream>
#include<string>
using namespace std;
template < class T>
void add(T a,  T b)
{
	cout << a + b << endl;
}

template<>
void add<char>(char a,char b)
{
	cout <<"calling char type ..."<< endl;
	cout << a << b <<endl;
}
int main()
{
	string a="hello", b="c++";
	add(20,30);
	add(1.2, 3.5);
	add<char>('a', 'b');
	add("hello", "c++");
	
}