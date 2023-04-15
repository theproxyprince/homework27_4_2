#include "../include/Rectangle.h"
#include <iostream>

void Rectangle::setHeight(double _height) {
    height = _height;
}

void Rectangle::setWidth(double _width) {
    width = _width;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::showInfo() const {
    std::cout << "Center = (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Height = " << getHeight() << std::endl;
    std::cout << "Width = " << getWidth() << std::endl;
    std::cout << "Area = " << getArea() << std::endl;
    std::cout << "Center of the circumscribed rectangle - (" << getX() << ", " << getY() << ")\n";
    std::cout << "Width of the circumscribed rectangle >= " << getWidth() << std::endl;
    std::cout << "Height of the circumscribed rectangle >= " << getHeight() << std::endl;
}
