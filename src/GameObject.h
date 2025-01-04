//
// Created by hijab on 1/4/2025.
//

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Game.h"

class GameObject {
private:
    int xpos;
    int ypos;
    SDL_Texture *objtexture;
    SDL_Rect destrect{};

public:

    GameObject(const char *textureSheet, int x, int y);
    ~GameObject();

    void update();
    void render();
    void clean();
};



#endif //GAMEOBJECT_H
