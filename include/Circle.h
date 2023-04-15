#pragma once
#include "../include/Figure.h"

class Circle: public Figure {
private:
    double radius = 0;
public:
    double getRadius() const;
    double getArea() const;
    void setRadius(double _radius);
    void showInfo();
};


