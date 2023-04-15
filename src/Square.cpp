#include "../include/Square.h"
#include <iostream>
#include <cmath>

void Square::setEdge(double _edge) {
    edge = _edge;
}

double Square::getEdge() const {
    return edge;
}

double Square::getArea() const {
    return pow(edge, 2);
}

void Square::showInfo() const {
    std::cout << "Center = (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Edge = " << getEdge() << std::endl;
    std::cout << "Area = " << getArea() << std::endl;
    std::cout << "Center of the circumscribed rectangle - (" << getX() << ", " << getY() << ")\n";
    std::cout << "Edge of the circumscribed rectangle >= " << getEdge() << std::endl;
}
