#include "../include/EquilateralTriangle.h"
#include <iostream>

void EquilateralTriangle::setEdge(double _edge) {
    edge = _edge;
}

double EquilateralTriangle::getEdge() const {
    return edge;
}

double EquilateralTriangle::getArea() const {
    return pow(edge, 2) * sqrt(3) / 4;
}

void EquilateralTriangle::showInfo() const {
    std::cout << "Center = (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Edge = " << getEdge() << std::endl;
    std::cout << "Area = " << getArea() << std::endl;
    std::cout << "Center of the circumscribed rectangle - (" << getX() << ", " << getY() << ")\n";
    std::cout << "Width of the circumscribed rectangle >= " << getEdge() << std::endl;
    std::cout << "Height of the circumscribed rectangle >= " << getEdge() * sqrt(3) / 2 << std::endl;
}
