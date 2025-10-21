#pragma once
#include "Shape.hpp"

class Circle: public Shape {
    private:
        double radius;
    public:
        Circle();
        Circle(double radius);
        double getArea();
};