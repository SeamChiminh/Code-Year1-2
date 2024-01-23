#include <iostream>
#include <cstring>
#include <cstdlib>
class String{
  private:
	   char *s1;
	   int size;
  public:
	   String(){ } // default constructor
	   
	   String(const char *s)
	   {
			s=new char[strlen(s)+1];
			size=strlen(s);
			strcpy(s1,s);
	   } // constructor
	   
	   String(const String &other)
	   {
	   		s1=new char[strlen(other.s1)+1];
	   		size=strlen(other.s1);
	   		strcpy(s,other.s1)
	   }//copy constructor
	   
	     ~String(){} // destructor
	     
	     int getSize() const
			{
				return s;
			}
	     char *getString();
	     
	     void print()
		 {
		 	cout << "s=" << s << endl;
		 }
		 
	     String operator+(const char *s1)
	     {
	     	cout << "calling string operator=(char *) " << endl;
	     	s=new char[strlen(s)+1];
			strcpy(s,s1);
			return *this;
		 }
		 
	     String operator+(String other)
		 {
		 	
		 }
		 
		 //assignment operator=
		 String &operator=(const String &right)
		 {
		 	cout << "calling assignment operator" << endl;
		 	if(this!=&other)
		 	{
		 		//1.delete old memory allocation
			 	delete [] s;
			 	//2.create new memory allocation
			 	s=new char [strlen(other.s)+1];
			 	strcpy(s,other.s);
			}	
			
			return *this;	 	
		 }
		 
		 String operator+(const char *s1)
		 {
		 	
		 }
     

};

int main(){
	
	String a("hello") , c;
	Strint b(a); 
	String s;
	
	cout << "a = " << a.getstring() << endl;
	cout << "b= " << b.getstring() << endl;
	a= "happy c++";
	
	c=a; //calling assignment operator
	
}