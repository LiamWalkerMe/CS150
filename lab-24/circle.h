#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>


using namespace std;

class Circle {

    private:
        double radius;
    
    public:
        Circle();
        Circle(double passedRadius);

        double calcArea();
        void setRadius(double passedRadius);
        double getRadius();

};
#endif