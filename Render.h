#ifndef RENDER_H
#define RENDER_H

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Tetrimino.h"

class Render {
public:
    Render();

    void drawGame(const Board& board, const Tetrimino& currentBlock, const Tetrimino& nextBlock, sf::RenderWindow& window) const;

private:
    void drawBlock(int x, int y, const sf::Color& color, sf::RenderWindow& window) const;
};

#endif
