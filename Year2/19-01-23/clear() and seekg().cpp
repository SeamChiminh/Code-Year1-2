#include<iostream>
#include<conio.h>
using namespace std;
//use cin.clear() and cin.seekg(0,ios::end);
//ដើម្បីកុំអោយអញ្ញាតិមួយទទួលយក ទិន្នន័យដែលបន្សល់ទុកក្នុង stream cin​ បន្ទាប់ពីមានការបញ្ចូលតម្លៃមុនៗ
int main()
{
    int id;
    float score;
    char name[20];

    cout << "Please input a student data\n";
    cout << "ID : ";
    cin >> id;
    cin.clear();cin.seekg(0,ios::end);
              
    cout << "Name : ";
    cin.get(name, 20);

    cout << "Score : ";
    cin >> score;

    cout << "Here is the student data\n";
    cout << "ID = " << id << endl;
    cout << "Name = " << name << endl;
    cout << "Score = " << score << endl;



    getch();
    return 0;
}