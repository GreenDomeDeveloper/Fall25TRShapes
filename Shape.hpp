#pragma once

class Shape {
    private:
        static int numShapes; // Static attribute
    public:
        virtual double getArea()=0; //children MUST implement
        virtual void identify(); // children implement to provide different functionality
        static int getNumShapes(); // static function specific to Shape class
        static void incNumShapes(); // ditto. Regular inheritance.
        virtual ~Shape(); //Must virtualize if child allocates memory or child destructor not called
};