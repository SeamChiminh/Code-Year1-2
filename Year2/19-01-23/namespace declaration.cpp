#include <iostream>
// namespace declaration
namespace One {
  int x;
  void read() {
    int isvalid=0;

    while(!isvalid) 
    {
       isvalid=0;

      std::cout <<"input x >0 ? ";
      std::cin>>x;

      if(std::cin.fail())
      {
        std::cout <<"error: wrong format....."<<std::endl;
        std::cin.clear();
        std::cin.ignore(100,'\n');
      }
      else if(x>0) isvalid=1;
      else std::cout <<"x must be positive >0 " <<std::endl;
    }
  }

  void print() 
  {
    std::cout <<"x=" << x <<std::endl;
  }

  int square() 
  {
    return x*x;
  }
}

using namespace One; // openning namespace One
int main() 
{
  x=10;
  
  print();
  
  std::cout <<"square of x=" << x << " is =" << square() 
            << std::endl;
  read();
  print();
  std::cout <<"square of x=" << x << " is =" << square() 
            << std::endl;
}