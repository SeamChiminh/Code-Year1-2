#include <iostream>
using namespace std;
char upper_char1(char c) 
{
  return (char)(c-32);
}
char upper_char2(char c) {
  return (char)(c+'A'-'a');
}
void toTitle(char s[]) {
  int i,sp;
  sp=i=0;
  while(s[i]) {
    if(s[i]!=' ' && sp==0) 
    {
      s[i]=upper_char1(s[i]);
      sp=1;
    }
    else if(s[i]==' ' && sp==1) 
       sp=0;
    ++i;
  }
  
}
int mystrcmp(const char s1[], const char s2[]) {
  // write your codes here
}
int main() 
{  char s[100];
   /*cout <<"Enter lower string : ";
   cin.get(s,20);
   cout <<"string s=" <<s <<endl;
   for(int i=0;s[i];++i)
     if(s[i]>='a' && s[i]<='z') 
       s[i]=upper_char1(s[i]);
   cout <<"upper string s=" << s <<endl;
   
   */
   cout <<"input string s:";
   cin.get(s,100);
   cout <<"string s=" <<s <<endl;
   toTitle(s);
   cout <<"title string s=" <<s <<endl;
  
}