#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
    incNumShapes();
    width = 4.0;
    length = 5.0;
}

Rectangle::Rectangle(double width, double length)
{
    incNumShapes();
    this->length = length;
    this->width = width;

}

double Rectangle::getArea()
{
    return length*width;
}

void Rectangle::identify()
{
    cout<<"I am a Rectangle"<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"Destroying Rectangle"<<endl;
}
