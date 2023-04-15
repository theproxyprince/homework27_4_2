#pragma once
#include "../include/Figure.h"

class Rectangle: public Figure {
private:
    double height = 0;
    double width = 0;

public:
    void setHeight(double _height);
    void setWidth(double _width);
    void showInfo() const;
    double getArea() const;
    double getHeight() const;
    double getWidth() const;
};


