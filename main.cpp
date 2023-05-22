#include <SFML/Graphics.hpp>
#include "Game.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tetris");
    Game game;

    game.run();

    return 0;
}
