#include "Shape.hpp"
#include <iostream>
using namespace std;

int Shape::numShapes=0;

void Shape::identify()
{
    cout<<"I am a generic shape"<<endl;
}

int Shape::getNumShapes()
{
    return numShapes;
}

void Shape::incNumShapes()
{
    numShapes++;
}

Shape::~Shape()
{
    cout<<"Destroying Shape"<<endl;
}
