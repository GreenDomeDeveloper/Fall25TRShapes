#include "Circle.hpp"

Circle::Circle()
{
    radius = 3.0;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}
