#include <iostream>

using namespace std;

class Circle {

    public:
        double radius;
        double calcArea();

};

double Circle::calcArea() {
    return 3.14 * radius * radius;
}


int main() {
    Circle circle1;
    Circle circle2;

    cout << "Please enter radius for circle 1: ";
    cin >> circle1.radius;

    cout << "Please enter radius for circle 2: ";
    cin >> circle2.radius;

 
    std::cout << "Area of the circle 1: " << circle1.calcArea() << std::endl;
    std::cout << "Area of the circle 2: " << circle2.calcArea() << std::endl;
    
    return 0;
}