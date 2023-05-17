#include "Tetrimino.h"
#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
Tetrimino::Tetrimino(int type, int x, int y, sf::Color color)
    : type(type), x(x), y(y), color(color) {
    setBlockShape(type);
}

void Tetrimino::rotate() {
    array<array<int, 4>, 4> newShape;
    for (int i = 0; i < shape.size(); ++i) {
        for (int j = 0; j < shape[0].size(); ++j) {
            newShape[i][j] = shape[shape.size() - j - 1][i];
        }
    }
}

void Tetrimino::setPosition(int x, int y) {
    x = x;
    y = y;
}

int Tetrimino::getX() const {
    return x;
}

int Tetrimino::getY() const {
    return y;
}

std::vector<sf::Vector2i> Tetrimino::getShape() const {
    std::vector<sf::Vector2i> shape;

    return shape;
}

void Tetrimino::setBlockShape(int type) {
    switch (type) {
        case 1:  // O
            shape = {{0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 1, 1, 0},
                       {0, 0, 0, 0}};
            break;
        case 2:  // I
            shape = {{1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 0, 0, 0}};
            break;
        case 3:  // L
            shape = {{1, 0, 0, 0},
                       {1, 0, 0, 0},
                       {1, 1, 0, 0},
                       {0, 0, 0, 0}};
            break;
        case 4:  // Z
            shape = {{0, 0, 0, 0},
                       {0, 1, 1, 0},
                       {0, 0, 1, 1},
                       {0, 0, 0, 0}};
            break;
        case 5:  // T
            shape = {{0, 0, 0, 0},
                       {1, 1, 1, 0,},
                          {0, 1, 0, 0},
                          {0, 0, 0, 0}};
            break;
        case 6:  // J
        shape = {{0, 1, 0, 0},
                   {0, 1, 0, 0},
                   {1, 1, 0, 0},
                   {0, 0, 0, 0}};
            break;
            case 7: // S
            shape ={{0, 0, 1, 1},
                    {0, 1, 1, 0},
                    {0, 1, 1, 0},
                    {0, 0, 0, 0}};
