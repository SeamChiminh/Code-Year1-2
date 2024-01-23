#include <iostream>
#include <fstream>
using namespace std;
void writefile(const char *filename){
  string t="Royal University of Phnom Penh";
  ofstream os(filename, ios::out);
  if(!os) {
    cout <<"Error: can not create file\n";
    exit(0);
  }
   cout <<"Write :" << t << " to file " <<endl;
   os <<t ;
   os.close();
}
void readfile(const char *filename) {
  ifstream is(filename, ios::in);
  char c;
  if(!is) {
    cout <<"error: file not found\n";
    exit(0);
  }
  cout <<"reading by seekg...\n";
  is.seekg(6,ios::beg);
  c=is.get();
  cout <<"c=" <<c <<endl;
  is.seekg(8,ios::cur);
  c=is.get();
  cout <<"c=" <<c <<endl;
  is.seekg(12,ios::cur);
  c=is.get();
  cout <<"c=" <<c <<endl;
   is.seekg(-11,ios::cur);
  c=is.get();
  cout <<"c=" <<c <<endl;
 
  is.seekg(-15,ios::cur);
  c=is.get();
  cout <<"c=" <<c <<endl;
  is.seekg(-3,ios::end);
  c=is.get();
  cout <<"c=" <<c <<endl;
  is.seekg(-5,ios::cur);
  c=is.get();
  cout <<"c=" <<c <<endl;
 
  is.close();
  
}
int main() {
  
  const char *filename="fileseekg.txt";
  writefile(filename);
  system("pause");
  readfile(filename);
  return 0;
}