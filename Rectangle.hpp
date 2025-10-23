#pragma once
#include "Shape.hpp"

class Rectangle: public Shape {
    private:
        double width;
        double length;
    public:
        Rectangle();
        Rectangle(double width, double length);
        double getArea();
        void identify();
        ~Rectangle();
};