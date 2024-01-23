//#include <iostream>
//#include <cstring>
//#include<ctime>
//using namespace std;
//char *getstring() {
//  static char s[20];  // local variable
//  cout <<"input string s ? ";
//  cin.getline(s,20);
//  return s;
//}
//int *getnumber1() {
//  static int x;
//  cout <<"input x ? ";
//  cin>>x;
//  return &x;
//  
//}
//int *getmax_elm(int *arr,int n) {
//  int *max_elm;
//  max_elm=&arr[0];
//  for(int i=1;i<n; ++i) 
//    if(*max_elm<arr[i]) 
//       max_elm=&arr[i];
//  cout <<"max elm addr ="<< max_elm <<endl;
//    return max_elm;
//}
//int getnumber2() {
//  int x;
//  cout <<"input x ? ";
//  cin>>x;
//  return x;
//}
//void printarray(int *arr,int n) {
//  cout <<n <<" elements:";
//  for(int i=0;i<n; ++i) 
//    cout <<*(arr+i) <<',';
//  cout <<"\b \n";
//}
//int main() {
//  /*// first calling getstring()
//  char mystr[20];
//  strcpy(mystr,getstring());
//  cout <<"mystr=" <<mystr<<endl;
//    // second calling getstring()
//  char *myptr=NULL;
//  myptr=getstring();
//  if(myptr==NULL) 
//    cout <<"myptr is NULL"<<endl;
//  else cout <<"myptr="<<myptr <<endl;
//  
//  int *p=NULL;
//  p=getnumber1();
//  if(p==NULL) 
//    cout <<"p is NULL"<<endl;
//  else cout <<"*p="<<*p <<endl;
//  */
//  int a[20]={0};
//  int n=10;
//  srand(time(NULL));
//  for(int i=0;i<n;++i) 
//    a[i]=1+rand()%99;//[1,99]  // rand()%N ; [0,N-1]
//  cout <<"random number [1-99]" <<endl;
//  printarray(a,n);
//  for(int i=0;i<n; ++i) 
//    cout <<"addr &a["<< i <<"]="<< &a[i] <<endl;
//    
//  int *maxp;
//  maxp=getmax_elm(a,n);
//  cout <<"maxp gets address =" <<maxp <<endl;
//  cout <<"max element is " << *maxp <<endl;
//  
//  
//}
#include <iostream>
using namespace std;
int sum(int n) {
  int s; // non static
  s=0;
  while(n>0) {
    s+=n;
    --n;
  }
  return s;
}
// using static variable
int static_sum(int n) {
  static int s=0;
  while(n>0){
    s+=n;
    --n;
  }
  return s;
}
int main() {
  cout <<"sum"<<"\t\t"<<"static_sum"<<endl;
  cout <<string(40,'-') <<endl;
  for(int i=1;i<=10; ++i) 
   cout <<"sum("<<i<<")="<<sum(i)<<'\t'
         <<"static_sum("<<i<<")="<<static_sum(i) <<endl;
  cout <<string(40,'-') <<endl;
  
}
/*
sum             static_sum
----------------------------------------
sum(1)=1        static_sum(1)=1  // 0+1  =>s=1
sum(2)=3        static_sum(2)=4  // 1+2+1=>s=4
sum(3)=6        static_sum(3)=10 // 4+3+2+1=>s=10
sum(4)=10       static_sum(4)=20
sum(5)=15       static_sum(5)=35
sum(6)=21       static_sum(6)=56
sum(7)=28       static_sum(7)=84
sum(8)=36       static_sum(8)=120
sum(9)=45       static_sum(9)=165
sum(10)=55      static_sum(10)=220
----------------------------------------
*/


//#include <iostream>
//#include <cstdlib> // malloc.h
//#include <ctime>
//using namespace std;
//char *getstring() {
//  char *s;
//  s=(char *)malloc(30*sizeof(char));
//  cout <<"input string s ? ";
//  cin.getline(s,30);
//  return s;
//}
//void printarray(int *arr,int n) 
//{ cout << n <<" elements:";
//  for(int i=0;i<n; ++i)
//    cout <<*(arr+i) <<',';
//  cout <<"\b \n";
//}
//int *getarray(int &n) {
//  int *arr;
//  arr=(int *)calloc(n,sizeof(int));
//  printarray(arr,n);
//  srand(time(NULL));
//  for(int i=0;i<n; ++i) 
//    *(arr+i)=1+rand()%99;
//  return arr;
//}
//int main(){
//  char *mystr;
//  mystr=getstring();
//  cout <<"mystr=" <<mystr <<endl;
//  free(mystr); // free or deallocate memory allocation
//  int *ap;
//  int n=5;
//  ap=getarray(n);
//  printarray(ap,n);
//  free(ap);
//}