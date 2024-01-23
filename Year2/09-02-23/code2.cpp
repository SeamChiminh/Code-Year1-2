#include <iostream>
#include <cstring>
using namespace std;
char *mystrchr(char s[], char c){
  for(int i=0;s[i];++i)
    if(s[i]==c)
      return s+i;
    return NULL;
}
int main()
{
  char s[]="hello c++ lang";
    char c='o';
    char *p=NULL;
    
    p=mystrchr(s,c);
    if(p!=NULL) 
      cout <<"p=" <<p ;
    else cout <<"p is NULL" ;
    
  cout <<endl;
}