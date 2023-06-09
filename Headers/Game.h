#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "SFML/System.hpp"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"
#include "SFML\Network.hpp"

class Game {
private:
    // Variables
    sf::RenderWindow *window;
    sf::Event sfEvent;

    // Intialization
    void initWindow();

public:

    Game();
    virtual ~Game();

    // Functions
    void updateSFMLEvents();
    void update();
    void render();
    void run();

};

#endif