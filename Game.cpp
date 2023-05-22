#include "Game.h"
#include "Board.h"
Game::Game()
    : window(sf::VideoMode(800, 600), "Tetris"),
      timer(0.0f),
      timerStep(0.5f),
      gameOver(false),
      board(10, 20),
      currentBlock(0, 0, sf::Color::Cyan),  // 提供初始位置和颜色
      nextBlock(0, 0, sf::Color::Cyan) {    // 提供初始位置和颜色
    // 构造函数的其他初始化操作
}

    // 设置方块的初始位置和颜色
    currentBlock = Tetrimino(4, 0, sf::Color::Cyan);
    nextBlock = Tetrimino(4, 0, sf::Color::Cyan);
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        } else if (event.type == sf::Event::KeyPressed) {
            handleKeyPress(event.key.code);
        }
    }
}

void Game::update() {
    float deltaTime = clock.restart().asSeconds();
    timer += deltaTime;

    // 更新方块的下落
    if (timer >= timerStep) {
        currentBlock.move(0, 1);

        // 检查是否发生碰撞
        if (board.isCollision(currentBlock)) {
            currentBlock.move(0, -1);

            // 将当前方块放置到游戏面板上
            board.placeTetrimino(currentBlock);

            // 消除满行
            board.removeFullLines();

            // 设置下一个方块
            currentBlock = nextBlock;
            nextBlock = Tetrimino(4, 0, sf::Color::Cyan);

            // 检查游戏是否结束
            if (board.isCollision(currentBlock)) {
                gameOver = true;
            }
        }

        timer = 0.0f;
    }
}

void Game::render() {
    window.clear();

    // 绘制游戏界面
    board.draw(window);
    currentBlock.draw(window);

    window.display();
}

void Game::handleKeyPress(sf::Keyboard::Key key) {
    if (key == sf::Keyboard::Left) {
        currentBlock.move(-1, 0);
        if (board.isCollision(currentBlock)) {
            currentBlock.move(1, 0);
        }
    } else if (key == sf::Keyboard::Right) {
        currentBlock.move(1, 0);
        if (board.isCollision(currentBlock)) {
            currentBlock.move(-1, 0);
        }
    } else if (key == sf::Keyboard::Down) {
        currentBlock.move(0, 1);
        if (board.isCollision(currentBlock)) {
            currentBlock.move(0, -1);
        }
    } else if (key == sf::Keyboard::Up) {
        currentBlock.rotate();
        if (board.isCollision(currentBlock)) {
            currentBlock.rotate();
            currentBlock.rotate();
            currentBlock.rotate();
        }
    }
}
