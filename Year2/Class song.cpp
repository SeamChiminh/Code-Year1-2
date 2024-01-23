#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Song
{
	private:
		string title;
		string singer;
		int yearRelease;
	
	public:
		void setSong(string t, string s, int y)
		{
			this -> title = t;
			this -> singer = s;
			this -> yearRelease = y;	
		}	
		
		void show()
		{
			cout << "_______________Information Of Song____________________________" << endl << endl;
			cout << left;
			cout << setw(20) << "Title" << setw(25) << "Singer" << setw(10) << "Year Release" << endl << endl;
			cout << setw(20) << title << setw(25) << singer << setw(10) << yearRelease << endl;
			cout << "______________________________________________________________" << endl;
		}
		
		void input()
		{
			cout << "______________Add Song_____________" << endl << endl;
			cout << "Input Title : " ;
			getline(cin, title);
			
			cout << "Input Singer: ";
			getline(cin, singer); fflush(stdin);
			
			cout << "Input Year Release: ";
			cin >> yearRelease;
		}
};

int main()
{
	Song a;
	
	a.input();
	
	//a.setSong("Hello bird", "Sin sisamuth", 1656 );
	a.show();
	
	getch();
	return 0;
}