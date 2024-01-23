#include <iostream>
#include<typeinfo>
using namespace std;

template <class T>
class Operation {
  T num1, num2;

public:
  Operation() = default;
  Operation(const T& num1, const T& num2);
  void setNum1(const T&);
  void setNum2(const T&);
  T getNum1() const;
  T getNum2() const;
  T addNumber();
  T subNumber();
  T multNumber();
  T divNumber();
  void input();
  void print();
};

template <class T>
Operation<T>::Operation(const T& num1, const T& num2) {
  this->num1 = num1;
  this->num2 = num2;
}

template <class T>
void Operation<T>::setNum1(const T& num) {
  num1 = num;
}

template <class T>
void Operation<T>::setNum2(const T& num) {
  num2 = num;
}

template <class T>
T Operation<T>::getNum1() const {
  return num1;
}

template <class T>
T Operation<T>::getNum2() const {
  return num2;
}

template <class T>
T Operation<T>::addNumber() {
  return num1 + num2;
}

template <class T>
T Operation<T>::subNumber() {
  return num1 - num2;
}

template <class T>
T Operation<T>::multNumber() {
  return num1 * num2;
}

template <class T>
T Operation<T>::divNumber() {
  return num1 / num2;
}

template <class T>
void Operation<T>::input() {
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
}

template <class T>
void Operation<T>::print() {
  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;
  cout << "Addition: " << addNumber() << endl;
  cout << "Subtraction: " << subNumber() << endl;
  cout << "Multiplication: " << multNumber() << endl;
  cout << "Division: " << divNumber() << endl;
}

template <class T>
void printAll(Operation<T> obj) {
  obj.print();
}

int main() {
  Operation<int> intObj;
  Operation<float> floatObj;

  cout << "For integer numbers:" << std::endl;
  intObj.input();
  cout << endl << "Printing integer operations:" << std::endl;
  printAll(intObj);

  cout << endl;

  cout << "For floating-point numbers:" << std::endl;
  floatObj.input();
  cout << endl << "Printing floating-point operations:" << std::endl;
  printAll(floatObj);

  return 0;
}