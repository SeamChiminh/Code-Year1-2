#include<iostream>
using namespace std;

struct StudentResult
{
    int id;
    string name;
    char gender;
    float *score;
};

StudentResult stu;
StudentResult *pStu = &stu;
   
int main()
{
    *stu.score;
    pStu->score;
    (*pStu).score;
    *pStu->score;
    *(*pStu).score;

    cout << "*stu.score =" << *stu.score << endl;
    cout << "pStu->score = " << pStu->score << endl;
    cout << "(*pStu).score = " << (*pStu).score << endl;
    cout << "*pStu->score = " << *pStu->score << endl;
    cout << "*(*pStu).score = " << *(*pStu).score << endl;

    return 0;
}