//
// Created by hijab on 1/3/2025.
//

#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "GameObject.h"

class GameObject;

class Game {
public:
    bool game_running;
    static SDL_Renderer* renderer;

    Game();
    ~Game();

    void handle_events();
    void update_game();
    void render_game();
    void clean_game();

private:
    int red, blue, green;
    SDL_Window* window;
    GameObject* board;
};


#endif //GAME_H
