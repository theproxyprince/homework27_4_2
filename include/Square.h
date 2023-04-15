#pragma once
#include "../include/Figure.h"

class Square: public Figure {
private:
    double edge = 0;

public:
    void setEdge(double _edge);
    void showInfo() const;
    double getEdge() const;
    double getArea() const;
};


