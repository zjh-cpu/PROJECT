#include "S_Tetrimino.h"

S_Tetrimino::S_Tetrimino(int x, int y) : Tetrimino(x, y, sf::Color::Green) {
    shape = {
        sf::Vector2i(-1, 1),
        sf::Vector2i(0, 1),
        sf::Vector2i(0, 0),
        sf::Vector2i(1, 0)
    };
}
