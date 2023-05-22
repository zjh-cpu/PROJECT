#include "Board.h"

Board::Board(int width, int height) : width(width), height(height) {
    // 初始化游戏面板
    grid.resize(width * height, sf::Color::Black);
}

void Board::clear() {
    // 清空游戏面板
    std::fill(grid.begin(), grid.end(), sf::Color::Black);
}

bool Board::isCollision(const Tetrimino& tetrimino) const {
    const std::vector<sf::Vector2i>& shape = tetrimino.getShape();
    int x = tetrimino.getX();
    int y = tetrimino.getY();

    // 检查方块是否与边界或其他方块发生碰撞
    for (const auto& position : shape) {
        int px = position.x + x;
        int py = position.y + y;

        if (px < 0 || px >= width || py < 0 || py >= height || grid[py * width + px] != sf::Color::Black) {
            return true;
        }
    }

    return false;
}

void Board::placeTetrimino(const Tetrimino& tetrimino) {
    const std::vector<sf::Vector2i>& shape = tetrimino.getShape();
    int x = tetrimino.getX();
    int y = tetrimino.getY();
    sf::Color color = tetrimino.getColor();

    // 将方块放置到游戏面板上
    for (const auto& position : shape) {
        int px = position.x + x;
        int py = position.y + y;

        grid[py * width + px] = color;
    }
}

void Board::removeFullLines() {
    std::vector<int> fullLines;

    // 找出满行的索引
    for (int y = 0; y < height; y++) {
        bool isFull = true;
        for (int x = 0; x < width; x++) {
            if (grid[y * width + x] == sf::Color::Black) {
                isFull = false;
                break;
            }
        }

        if (isFull) {
            fullLines.push_back(y);
        }
    }

    // remove full lines
    for (const auto& line : fullLines) {
        // 从底部开始移除满行上方的所有行
        for (int y = line; y > 0; y--) {
            for (int x = 0; x < width; x++) {
                grid[y * width + x] = grid[(y - 1) * width + x];
            }
        }

        // top line should be black
        for (int x = 0; x < width; x++) {
            grid[x] = sf::Color::Black;
        }
    }
}

void Board::draw(sf::RenderWindow& window) const {
    // render the board
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            sf::RectangleShape block(sf::Vector2f(20.0f, 20.0f));
            block.setFillColor(grid[y * width + x]);
            block.setPosition(x * 20.0f, y * 20.0f);
            window.draw(block);
        }
    }
}
