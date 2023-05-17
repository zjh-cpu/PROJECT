#include "Game.h"

Game::Game() {
    // Initialize your attributes here
    window(sf::VideoMode(800, 600), "Tetris Game"), // Creates a window with size 800x600 pixels and title "Tetris Game"
    board(), // Default constructor of Board
    currentBlockgroup(), // Default constructor of Tetrimino
    nextBlockgroup(), // Default constructor of Tetrimino
    timer(0.0f), // Initialize timer with 0.0
    timerStep(1.0f), // Initialize timerStep with 1.0
    gameOver(false) // Initialize gameOver with false

}

void Game::run() {
    // Implementation of run
    while (window.isOpen){
    dealingEvent();
    if (!gameOver){
    update();
    }
    render();
    if(gameOver){
    // Game over
    
    }
}

void Game::dealingEvent() {
    // Implementation of dealingEvent
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
            // Close window: exit
            case sf::Event::Closed:
                window.close();
                break;

            // Key pressed
            case sf::Event::KeyPressed:
                switch (event.key.code) {
                    case sf::Keyboard::Up:
                        // Rotate the current tetrimino
                        break;
                    case sf::Keyboard::Down:
                        // Move the current tetrimino down faster
                        break;
                    case sf::Keyboard::Left:
                        // Move the current tetrimino left
                        break;
                    case sf::Keyboard::Right:
                        // Move the current tetrimino right
                        break;
                    // Add more cases for other keys if needed
                }
                break;

            // Add more cases for other event types if needed
        }
    }
}

}

void Game::update() {
    // Implementation of update
}

void Game::render() {
    // Implementation of render
}
