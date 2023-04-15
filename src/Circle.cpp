#include "../include/Circle.h"
#include <iostream>
#include <cmath>

double Circle::getArea() const {
    return atan(1) * 4 * pow(getRadius(), 2);
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double _radius) {
    radius = _radius;
}

void Circle::showInfo() {
    std::cout << "Center = (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Radius = " << getRadius() << std::endl;
    std::cout << "Area = " << getArea() << std::endl;
    std::cout << "Center of the circumscribed rectangle - (" << getX() << ", " << getY() << ")\n";
    std::cout << "Edge of the circumscribed rectangle = " << 2 * getRadius() << std::endl;
}
