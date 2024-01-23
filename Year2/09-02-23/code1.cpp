#include<iostream>
#include<string>
#define mypass   "hello2023"
using namespace std;
int main() {
  string pass ;
  string save_pass="";
  int i=1;
  while(1) {
    cout <<"input pass : ";
    cin>>pass;
    save_pass+=to_string(i)+". "+pass;
    save_pass+='\n';
    if(pass.compare(mypass)!=0)
      cout <<">>>Sorry incorrect password!"<<endl;
    else break;
    cin.sync()  ;
    ++i;
  }
  cout <<"Access is granting....."<<endl;
  cout <<"previous inputted passwords.."<<endl;
  cout <<save_pass <<endl;
  
  
  
}
