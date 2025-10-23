#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<Shape*> myShapes;

    cout<<"Number of shapes: "<<Shape::getNumShapes()<<endl;
    //myShapes.push_back(new Shape());
    myShapes.push_back(new Circle());
    myShapes.push_back(new Circle(5));
    myShapes.push_back(new Rectangle());
    myShapes.push_back(new Rectangle(7,9));

    cout<<"Number of shapes: "<<Shape::getNumShapes()<<endl;

    for (size_t i = 0; i < myShapes.size(); i++)
    {
        cout<<myShapes.at(i)->getArea()<<endl;
    }

    for (size_t i = 0; i < myShapes.size(); i++)
    {
        myShapes.at(i)->identify();
    }

    Shape* demo= new Circle(12);
    delete demo;

    Shape* demo2= new Rectangle(12,17);
    delete demo2;
    
}