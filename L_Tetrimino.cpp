#include "L_Tetrimino.h"

L_Tetrimino::L_Tetrimino(int x, int y) : Tetrimino(x, y, sf::Color(255, 165, 0)) {
    shape = {
        sf::Vector2i(-1, 0),
        sf::Vector2i(0, 0),
        sf::Vector2i(1, 0),
        sf::Vector2i(1, 1)
    };
}
