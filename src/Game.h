//
// Created by hijab on 1/3/2025.
//

#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>


class Game {
public:
    bool game_running;

    Game();
    ~Game();

    void handle_events();
    void update_game();
    void render_game();
    void clean_game();

private:

    SDL_Window* window;
    SDL_Renderer* renderer;
};


#endif //GAME_H
