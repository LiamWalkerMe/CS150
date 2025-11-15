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


int main() {
    Circle circle2;

    cout << "Cirlce 2's radius before any value is set: " << circle2.getRadius() << endl;

    double radiusInput;

    cout << "Please enter radius for circle 1: ";
    cin >> radiusInput;
    Circle circle1(radiusInput);

    cout << "Please enter radius for circle 2: ";
    cin >> radiusInput;
    circle2.setRadius(radiusInput);

 
    std::cout << "Area of the circle 1: " << circle1.calcArea() << std::endl;
    std::cout << "Area of the circle 2: " << circle2.calcArea() << std::endl;
    
    return 0;
}