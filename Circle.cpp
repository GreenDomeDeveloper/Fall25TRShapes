#include "Circle.hpp"
#include <iostream>
using namespace std;

Circle::Circle()
{
    incNumShapes();
    radius = 3.0;
}

Circle::Circle(double radius)
{
    incNumShapes();
    this->radius = radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

void Circle::identify(){
    cout<<"I am a Circle"<<endl;
}

Circle::~Circle()
{
    cout<<"Destroying Circle"<<endl;
}
