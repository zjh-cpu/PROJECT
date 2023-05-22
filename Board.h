#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>
#include "Tetrimino.h"

class Board {
public:
    Board(int width, int height);

    void clear();
    bool isCollision(const Tetrimino& tetrimino) const;
    void placeTetrimino(const Tetrimino& tetrimino);
    void removeFullLines();
    void draw(sf::RenderWindow& window) const;

private:
    int width;
    int height;
    std::vector<sf::Color> grid;
};

#endif

