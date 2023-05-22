#include "O_Tetrimino.h"

O_Tetrimino::O_Tetrimino(int x, int y) : Tetrimino(x, y, sf::Color::Yellow) {
    shape = {
        sf::Vector2i(0, 0),
        sf::Vector2i(1, 0),
        sf::Vector2i(0, 1),
        sf::Vector2i(1, 1)
    };
}
