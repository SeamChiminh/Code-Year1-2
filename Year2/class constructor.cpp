#include<iostream>
#include<conio.h>
using namespace std;
//constuctor

class Song
{
	private:
		string title;
		string singer;
		int yearRelease;
	
	public:
		
		void Display()
		{
			cout << title << "\t" << singer << "\t" << yearRelease << endl;	
		}
		
		Song() //constructor
		{
			cout << "Hello" << endl;	
		}	
		
		Song(string title, string singer, int year) 
		{
			// create object by parameterized constructor
			cout << "Constructor" << endl;
			this -> title = title;
			this -> singer = singer;
			this -> yearRelease = year;
		}
};
int main()
{
	Song a1; // default constructor // short-hand constructor
	Song a2 = Song(); // long-hnd constructor 
	
	Song a3 = Song("7 Year", "Lukag keham" , 2012); // long-hand parameterized constructor
	
	a3.Display();
	
	
	getch();
	return 0;
}