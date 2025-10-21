#include "Rectangle.hpp"

Rectangle::Rectangle()
{
    width = 4.0;
    length = 5.0;
}

Rectangle::Rectangle(double width, double length)
{
    this->length = length;
    this->width = width;

}

double Rectangle::getArea()
{
    return length*width;
}
