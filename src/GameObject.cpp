//
// Created by hijab on 1/4/2025.
//

#include "GameObject.h"

GameObject::GameObject(const char *textureSheet, int x=0, int y=0) {
    //std::cout << textureSheet << std::endl;

    destrect.x=x;
    destrect.y=y;
    destrect.w = 800;
    destrect.h = 800;

    SDL_Surface *temp = IMG_Load(textureSheet);
    objtexture = SDL_CreateTextureFromSurface(Game::renderer, temp);
    if (objtexture==nullptr) {
        std::cout << "texture not loaded" << std::endl;
        std::cout << "IMG_Load failed: " << IMG_GetError() << std::endl;
    }
    SDL_FreeSurface(temp);
}

GameObject::~GameObject() {
    SDL_DestroyTexture(objtexture);
}


void GameObject::update() {

}

void GameObject::render() {
    SDL_RenderCopy(Game::renderer, objtexture, nullptr, &destrect);
}

void GameObject::clean() {

}
