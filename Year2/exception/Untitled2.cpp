#include<iostream>
#include<stdexcept>
using namespace std;

class Myexception
{
	string err_message;
	public:
			
};
int addNumber(int a, int b)
{
	if(a==0 && b==0) throw invalid_argument("error");
	return a+b;
	
}
int getnumber(string s)
{
	int num;
	while(1)
	{
		try
		{
			cout << s;
			cin >> num;
			if(!cin) throw runtime_error("error: wrong");
			else break;
		}catch(runtime_error &obj)
		{
			cout << obj.what() << endl;
			cin.clear();
			cin.seekg(0,ios::beg);
		}
	}
	return num;
}
int main()
{
	int a,b, add;
	try
	{
		a=getnumber("enter a: ");
		b=getnumber( "enter b: ");
		cout << "a = " << ",b = " << b << endl;
		add=addNumber(a,b);
		cout << "add(+) = " << add << endl;
	}catch(invalid_argument &obj)
	{
		cout << "";
	}
}