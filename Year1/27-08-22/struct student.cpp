#include<iostream>
#include<conio.h>
using namespace std;

typedef struct { int id, cpro, math, eng;
				char name[20],sex;
				double avg;
				}st;
				
void input(st s[],int n){
	for(int i=0; i<n; i++){
	cout << "=== Student" << i+1 << " ===" << endl;
	cout << "ID  : "; 
	cin >> s[i].id;
	cout << "name: ";
	cin >> s[i].name;
	cout << "Sex : "; 
	cin >> s[i].sex;fflush(stdin);
	cout << "cpro: ";
	cin >> s[i].cpro;
	cout << "Math: ";
	cin >> s[i].math;
	cout << "Eng : ";
	cin >> s[i].eng;
	
	s[i].avg = s[i].math + s[i].cpro + s[i].eng / 3.0;
	
	}
	cout << endl;
	cout << "Saved...";
	getch();	
}
void output(st s[],int n){
	cout << "Name\tID\tSex\tCpro\tMath\tEng\tavg" << endl;
	for(int i=0; i<n; i++){
		cout << s[i].name << "\t" << s[i].id << "\t" << s[i].sex << "\t" << s[i].cpro << "\t";
		cout << s[i].math << "\t" << s[i].eng << "\t" << s[i].avg;
		cout << endl; 
	}

	getch();
}
void search(st s[],int n){
	int ID;
	bool found;
	cout << "input ID to search: ";
	cin >> ID;
	for(int i=0; i<n; i++){
		if(s[i].id == ID){
			found = 1;
			cout << "Name\tID\tSex\tCpro\tMath\tEng\tavg" << endl;
			cout << s[i].name << "\t" << s[i].id << "\t" << s[i].sex << "\t" << s[i].cpro << "\t";
			cout << s[i].math << "\t" << s[i].eng << "\t" << s[i].avg;
			cout << endl;
		}
	}
		if(found==0) 
			cout << "Not found,Please enter again.";
		else
			cout << "has been Found";
}

void Delete(st s[],int &n){
	int Id,c,found=0;
	v:
	system ("cls");
	cout << "Delete by ID: ";
	cin >> Id;
	
	for(int i=0; i<n; i++){
		if(s[i].id == Id){
			cout << "Name\tID\tSex\tCpro\tMath\tEng\tavg" << endl;
			cout << s[i].name << "\t" << s[i].id << "\t" << s[i].sex << "\t" << s[i].cpro << "\t";
			cout << s[i].math << "\t" << s[i].eng << "\t" << s[i].avg;
			cout << endl;
		}
		if(found == 0){
			cout << endl << endl;
			cout << "Not found";
		}	
		else{
			cout << endl << endl;
			cout << "Has been found";
		}
	}
	cout << endl << endl;
	
	cout << "1. Delete" << endl;
	cout << "2. don't delete" << endl;
	cout << "3. Back to menu" << endl;
	cout << "choose: ";
	cin >> c;
	switch(c){
		case 1:
				for(int i=0; i<n; i++){
				if(s[i].id == Id){
					
					found = 1;
					n = n-1;
					for(int j=i; j<n; j++)
						s[i].id = s[j].id;
					i--;
					
					}
				}
				cout << "has been deleted...";
				getch();
				goto v;
				
		case 2:
			cout << "Press Enter for back";
			getch();
			goto v;
		case 3:
			st student[50];
			int q,n;
			A:
			system("cls");
			cout << "1. input information of student" << endl;
			cout << "2. View data" << endl;
			cout << "3. Search student" << endl;
			cout << "4. Delete student" << endl;
			cout << "5. Insert student" << endl;
			cout << "6. Update student" << endl;
			cout << "7. Exit program" << endl;
			cout << "Choose: ";
			cin >> q;
			switch(q){
				case 1:
					cout << "input number of student: ";
					cin >> n;
					input(student,n);
					goto A;	
				case 2:
					output(student,n);
					goto A;
				case 3:
					search(student,n);
					getch();
					goto A;
				case 4:
					Delete(student,n);
					getch();
					goto A;
				case 7: 
					break;
				default: 
					cout << "please enter again.";
					getch();
					goto A;	
			}
		default:
			cout << "Please, Enter again.";
			getch();
			goto v;
}
	
}
void insert(st s[],int &n){
	int i, post;
	st student;
	
	cout << "Position: ";
	cin >> post;
	cout << "New Id  : ";
	cin >> student.id;
	cout << "New name: ";fflush(stdin);
	cin >> student.name;
	cout << "New sex : ";
	cin >> student.sex;
	cout << "New cpro: ";
	cin >> student.cpro;
	cout << "New math: ";
	cin >> student.math;
	cout << "New eng : ";
	cin >> student.eng;
	for(i=n; i>post; i--)
		s[i] = s[i-1];
		s[post-1] = student;
		n = n+1;
		output(s,n);
}
	
int main(){
	st student[50];
	int n;
	A:
	system ("cls");	
	int choice;
	
	cout << "1. input information of student" << endl;
	cout << "2. View data" << endl;
	cout << "3. Search student" << endl;
	cout << "4. Delete student" << endl;
	cout << "5. Insert student" << endl;
	cout << "6. Update student" << endl;
	cout << "7. Exit program" << endl;
	cout << "choose: ";
	cin >> choice;
	switch(choice){
		case 1:
			cout << "input number of student: ";
			cin >> n;
			input(student,n);
			goto A;
		case 2:
			output(student,n);
			goto A;
		case 3:
			search(student,n);
			getch();
			goto A;
		case 4:
			Delete(student,n);
			
			getch();
			goto A;
		case 5:
			insert(student,n);
			getch();
			goto A;
		case 7: return 0;
		default: 
			cout << "please enter again.";
			getch();
			goto A;
	}
	
	
	getch();
}