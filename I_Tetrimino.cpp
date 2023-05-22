#include "I_Tetrimino.h"

I_Tetrimino::I_Tetrimino(int x, int y) : Tetrimino(x, y, sf::Color::Cyan) {
    shape = {
        sf::Vector2i(-1, 0),
        sf::Vector2i(0, 0),
        sf::Vector2i(1, 0),
        sf::Vector2i(2, 0)
    };
}
