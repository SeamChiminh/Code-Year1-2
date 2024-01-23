#include<iostream>
#include<math.h>
using namespace std;

class Circle
{
    private:
    double pi = 3.14159f;
    public:
    double radius;
    double getArea();
    double getCircumference();

};
int main()
{
    Circle circle1;
    circle1.radius = 3.0;

    cout << "Area of circle is " << circle1.getArea() << "Square meters" << endl;
    cout << "Primater of circle is " << circle1.getCircumference() << "meters" << endl;

    Circle *circle2 = new Circle();
    circle2->radius = 5.0;

    cout << "Area of circle is " << circle2->getArea() << "Square meters" << endl;
    cout << "Primater of circle is " << circle2->getCircumference() << "meters" << endl << endl;
    delete circle2;

    return 0;
}
double Circle::getArea()
{
    return (pi * pow(radius,2));
}
double Circle::getCircumference()
{
    return (2 * radius * pi);
}