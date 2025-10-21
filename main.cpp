#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include <vector>
using namespace std;


int main(){
    Shape s1;
    Circle c1;
    Circle c2(4.2);
    Rectangle r1;
    Rectangle r2(7.0,10.2);

    cout<<s1.getArea()<<endl;
    cout<<c1.getArea()<<endl;
    cout<<c2.getArea()<<endl;
    cout<<r1.getArea()<<endl;
    cout<<r2.getArea()<<endl;
}