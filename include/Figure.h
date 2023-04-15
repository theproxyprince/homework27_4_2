#pragma once
#include <iostream>
#include <string>

enum Color {
    NONE,
    RED,
    BLUE,
    GREEN
};

class Figure {
private:
    int x = 0;
    int y = 0;
    Color color = Color::NONE;
public:
    int getX() const;
    int getY() const;
    std::string getColor() const;
    void setX(int x);
    void setY(int y);
    void setColor(Color color);
};
