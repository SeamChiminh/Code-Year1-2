#include <iostream>
using namespace std;
namespace One{
    int x;
    void print() 
    {
        cout <<"square of x=" << x <<" is =" <<x*x <<endl;
    }
}
namespace Two{
    int x;
    void print() 
    {
        if(x>0) 
                cout <<x << " is a positive " <<endl;
        else    cout<<x <<" is a negative" <<endl;
  
    }

}

int main() {

  One::x=100;
  Two::x=2;
  
  One::print();
  Two::print();
  
}