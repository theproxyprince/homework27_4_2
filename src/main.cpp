#include <iostream>
#include <string>
#include "../include/Square.h"
#include "../include/Circle.h"
#include "../include/EquilateralTriangle.h"
#include "../include/Rectangle.h"


int main() {
    std::string input;
    do {
        std::cout << "Input(circle, square, triangle, rectangle): ";
        std::cin >> input;
        if (input == "circle") {
            auto* circle = new Circle;

            std::cout << "Set begin coordinates: ";
            int x, y;
            std::cin >> x >> y;
            circle->setX(x);
            circle->setY(y);

            std::cout << "Set radius: ";
            double radius;
            std::cin >> radius;
            circle->setRadius(radius);

            circle->showInfo();

        } else if (input == "square") {
            auto* square = new Square;

            std::cout << "Set begin coordinates: ";
            int x, y;
            std::cin >> x >> y;
            square->setX(x);
            square->setY(y);

            std::cout << "Set edge: ";
            double edge;
            std::cin >> edge;
            square->setEdge(edge);

            square->showInfo();

        } else if (input == "triangle") {
            auto* triangle = new EquilateralTriangle;

            std::cout << "Set begin coordinates: ";
            int x, y;
            std::cin >> x >> y;
            triangle->setX(x);
            triangle->setY(y);

            std::cout << "Set edge: ";
            double radius;
            std::cin >> radius;
            triangle->setEdge(radius);

            triangle->showInfo();

        } else if (input == "rectangle") {
            auto* rectangle = new Rectangle;

            std::cout << "Set begin coordinates: ";
            int x, y;
            std::cin >> x >> y;
            rectangle->setX(x);
            rectangle->setY(y);

            std::cout << "Set width and height: ";
            double width, height;
            std::cin >> width >> height;
            rectangle->setWidth(width);
            rectangle->setHeight(height);

            rectangle->showInfo();
        }
    } while (input != "end");
}
