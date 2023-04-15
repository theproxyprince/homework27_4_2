#include <iostream>
#include "../include/Figure.h"

std::string Figure::getColor() const {
    if (color == Color::BLUE) {
        return "Blue";
    } else if (color == Color::GREEN) {
        return "Green";
    } else if (color == Color::RED) {
        return "Red";
    }
}

int Figure::getX() const {
    return x;
}

int Figure::getY() const {
    return y;
}

void Figure::setX(int _x) {
    x = _x;
}

void Figure::setY(int _y) {
    y = _y;
}

void Figure::setColor(Color _color) {
    color = _color;
}
