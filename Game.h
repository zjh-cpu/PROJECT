#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Tetrimino.h"
#include "Board.h"

class Game {
public:
    Game();

    void run();

private:
    sf::RenderWindow window;
    sf::Clock clock;
    sf::Time timeSinceLastUpdate;
    sf::Time timePerFrame;
    Board board;
    float timer;
    float timerStep;
    bool gameOver;

    Tetrimino currentBlock;
    Tetrimino nextBlock;

    void processEvents();
    void update();
    void render();
    void handleKeyPress(sf::Keyboard::Key key);
};

#endif
