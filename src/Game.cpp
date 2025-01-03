//
// Created by hijab on 1/3/2025.
//

#include "Game.h"

#include <SDL2/SDL_events.h>

Game::Game() {
    window = SDL_CreateWindow("Scrabble", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 750, 750, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer) {
        SDL_SetRenderDrawColor(renderer, 200, 70, 100, 255);
    }
    game_running = true;
}

void Game::handle_events() {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch(event.type) {
        case SDL_QUIT:
            game_running = false;
        break;
    }
}

void Game::update_game() {
    // Implementation
}

void Game::render_game() {
    // Implementation
    SDL_RenderClear(renderer);
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