#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include <vector>

class Shape {
public:
    virtual ~Shape() {}

    virtual void move(int dx, int dy) = 0;
    virtual void rotate() = 0;

    virtual sf::Color getColor() const = 0;
    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual const std::vector<sf::Vector2i>& getShape() const = 0;
};

#endif
