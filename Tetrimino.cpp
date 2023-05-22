#include "Tetrimino.h"

Tetrimino::Tetrimino(int x, int y, sf::Color color)
    : x(x), y(y), color(color) {}



void Tetrimino::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Tetrimino::rotate() {
    // 实现旋转逻辑
}

sf::Color Tetrimino::getColor() const {
    return color;
}

int Tetrimino::getX() const {
    return x;
}

int Tetrimino::getY() const {
    return y;
}

const std::vector<sf::Vector2i>& Tetrimino::getShape() const {
    return shape;
}

