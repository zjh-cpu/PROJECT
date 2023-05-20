#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Tetrimino.h"

class Game {
    private:
    sf::RenderWindow window;
    Board board;
    Tetrimino currentBlockgroup;
    Tetrimino nextBlockgroup;
    float timer;
    float timerStep;
    bool gameOver;
    
public:
    Game();
    void run();
    void dealingEvent();
    void update();
    void render();   
};

#endif
