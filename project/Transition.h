// Transition.h
// Interface for Transition derived class
// Project: Breaking Blue
// Authors: Kate Barlock, Kat Herring, Ann Keenan

#ifndef _TRANSITION
#define _TRANSITION

#include "Level.h"
#include "Texture.h"

using namespace std;

class Transition : public Level {
public:
    Transition();
    ~Transition();
    // implement virtual functions of Level class
    void setUp(SDL_Renderer *);
    void display(); // included to avoid warnings
    void loadMedia();

    void display(int); // takes in current level (redefine display function)
    // get/set functions
    Texture * getForeground(int);
private:
    SDL_Renderer *Renderer;
    // store foregrounds for 6 transition screens
    Texture Foreground[5];
};

#endif
