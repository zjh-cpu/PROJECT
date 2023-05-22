#ifndef TETRIMINO_H
#define TETRIMINO_H

#include <SFML/Graphics.hpp>
#include "Shape.h"

class Tetrimino : public Shape {
public:
    Tetrimino(int x = 0, int y = 0, sf::Color color = sf::Color::White);
;
    virtual ~Tetrimino() {}

    void move(int dx, int dy);
    void rotate();

    sf::Color getColor() const;
    int getX() const;
    int getY() const;
    const std::vector<sf::Vector2i>& getShape() const;

protected:
    int x;
    int y;
    sf::Color color;
    std::vector<sf::Vector2i> shape;
};

#endif
