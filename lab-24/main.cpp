#include <iostream>
#include "circle.h"
using namespace std;


int main() {

    Circle circle1;
    Circle circle2;

    cout << "Testing default constructor: " << endl;

    cout << "Circle 1 Radius: " << circle1.getRadius() << endl;
    cout << "Circle 2 Radius: " << circle2.getRadius() << endl;
    

    circle1.setRadius(-2);
    circle2.setRadius(-100);

    cout << "Testing negative Radii: " << endl;

    cout << "Circle 1 Radius: " << circle1.getRadius() << endl;
    cout << "Circle 2 Radius: " << circle2.getRadius() << endl;

    cout << "Testing positive Radii: " << endl;

    circle1.setRadius(2);
    circle2.setRadius(100);

    cout << "Circle 1 Radius: " << circle1.getRadius() << endl;
    cout << "Circle 2 Radius: " << circle2.getRadius() << endl;

    cout << "Testing area: " << endl;

    std::cout << "Area of the circle 1: " << circle1.calcArea() << std::endl;
    std::cout << "Area of the circle 2: " << circle2.calcArea() << std::endl;
 

    return 0;
}