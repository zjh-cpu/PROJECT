#ifndef TETRIMINO_H
#define TETRIMINO_H

#include <SFML/Graphics.hpp>
#include <vector>

class Tetrimino {
    private:
    int type;
    int shape;
    int x;
    int y;
    sf::Color color;
public:
    Tetrimino(int type, int shape, int x, int y, sf::Color color);

    void rotate();
    void setPosition(int x, int y);
    int getX() const;
    int getY() const;
    std::vector<sf::Vector2i> getShape() const;
};

#endif 
