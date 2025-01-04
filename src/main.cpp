#define SDL_MAIN_HANDLED

#include "Game.h"
#include <iostream>

int main(int argc, char* argv[]) {

    Game scrabble;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    while(scrabble.game_running) {
        scrabble.handle_events();
        scrabble.update_game();
        scrabble.render_game();
    }

    scrabble.clean_game();

    return 0;
}
