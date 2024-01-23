#include<iostream>
using namespace std;

template < class T>
void print(T arg)
{
	cout << "arg =" << arg << endl;
}
//specialization
template<>
void print<char>(int arg )
{
	cout <<"sorry can not use char type..."  << endl;
}
int main()
{
	print()
}