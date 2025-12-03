#include <iostream>
#include "circle.h"

using namespace std;


Circle::Circle() {
    radius = 0;
}

Circle::Circle(double passedRadius) {
    setRadius(passedRadius);
}

double Circle::calcArea() {
    return 3.14159 * radius * radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double passedRadius) {
    if(passedRadius < 0) {
        radius = 0;
    } else {
        radius = passedRadius;
    }
    
}