#include "Render.h"

Render::Render() {}

void Render::drawGame(const Board& board, const Tetrimino& currentBlock, const Tetrimino& nextBlock, sf::RenderWindow& window) const {
    window.clear();

    // 绘制游戏面板
    for (int y = 0; y < board.getHeight(); y++) {
        for (int x = 0; x < board.getWidth(); x++) {
            sf::Color color = board.getGridColor(x, y);
            drawBlock(x, y, color, window);
        }
    }

    // 绘制当前方块
    const std::vector<sf::Vector2i>& currentShape = currentBlock.getShape();
    int currentX = currentBlock.getX();
    int currentY = currentBlock.getY();
    sf::Color currentColor = currentBlock.getColor();

    for (const auto& position : currentShape) {
        int x = position.x + currentX;
        int y = position.y + currentY;
        drawBlock(x, y, currentColor, window);
    }

    // 绘制下一个方块
    const std::vector<sf::Vector2i>& nextShape = nextBlock.getShape();
    int nextX = nextBlock.getX();
    int nextY = nextBlock.getY();
    sf::Color nextColor = nextBlock.getColor();

    for (const auto& position : nextShape) {
        int x = position.x + nextX + board.getWidth() + 2;
        int y = position.y + nextY + 1;
        drawBlock(x, y, nextColor, window);
    }

    window.display();
}

void Render::drawBlock(int x, int y, const sf::Color& color, sf::RenderWindow& window) const {
    sf::RectangleShape block(sf::Vector2f(20.0f, 20.0f));
    block.setFillColor(color);
    block.setPosition(x * 20.0f, y * 20.0f);
    window.draw(block);
}
