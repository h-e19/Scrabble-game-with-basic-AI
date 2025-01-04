//
// Created by hijab on 1/3/2025.
//

#include "Game.h"

SDL_Renderer* Game::renderer = nullptr;

Game::Game() : red(100), blue(150), green(100) {
    window = SDL_CreateWindow("Scrabble", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 800, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    board = new GameObject("C:/Users/hijab/CLionProjects/scrabble/assets/boardImage.jpg", 0, 0);
    game_running = true;
}

void Game::handle_events() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch(event.type) {
        case SDL_QUIT:
            game_running = false;
        break;
        case SDL_MOUSEBUTTONDOWN:
            if (event.button.button == SDL_BUTTON_LEFT) {
                red=(red+rand())%255;
                green=(green+rand())%255;
                blue=(blue+rand())%255;
            }
        break;
    }
}

void Game::update_game() {
    // Implementation
}

void Game::render_game() {
    SDL_RenderClear(renderer);
    board->render();
    SDL_RenderPresent(renderer);
}

void Game::clean_game() {
    // Implementation
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}

Game::~Game() {
    // Destructor implementation
}