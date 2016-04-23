// Levels.cpp
// Implementation of Levels class
// Project: Breaking Blue
// Authors: Kate Barlock, Kat Herring, Ann Keenan

#include "Levels.h"

using namespace std;

Levels::Levels() {
    CurrLevel = 0;
}

Levels::~Levels() {}

void Levels::setUp(SDL_Renderer *renderer) {
    level1.setUp(renderer);
    level3.setUp(renderer);
}

void Levels::loadMedia() {
    level1.loadMedia();
    level3.loadMedia();
}

void Levels::display() {
    if (CurrLevel == 1)
        level1.display();
    else if (CurrLevel == 2)
        level3.display();
}

void Levels::playMusic() {
    if (CurrLevel == 1)
        level1.playMusic();
    else if (CurrLevel == 2)
        level3.playMusic();
}

Texture * Levels::getForeground() {
    if (CurrLevel == 1)
        return level1.getForeground();
    else if (CurrLevel == 2)
        return level3.getForeground();
    else //not in a level
        return NULL;
}

void Levels::setCurrText() {
    if (CurrLevel == 1)
        level1.setCurrText();
}

int Levels::getCurrLevel() {
    return CurrLevel;
}

void Levels::setCurrLevel(int currLevel) {
    CurrLevel = currLevel;
}

void Levels::setCameraX(int x) {
    if (CurrLevel == 1)
        level1.setCameraX(x);
    else if (CurrLevel == 2)
        level3.setCameraX(x);
}

int Levels::getCameraX() {
    if (CurrLevel == 1)
        return level1.getCameraX();
    else if (CurrLevel == 2)
        return level3.getCameraX();
    else
        return 0;
}

void Levels::setCameraY(int y) {
    if (CurrLevel == 1)
        level1.setCameraY(y);
    else if (CurrLevel == 2)
        level3.setCameraY(y);
}

int Levels::getCameraY() {
    if (CurrLevel == 1)
        return level1.getCameraY();
    else if (CurrLevel == 2)
        return level3.getCameraY();
    else //not in a level
        return 0;
}

SDL_Rect * Levels::getCamera() {
    if (CurrLevel == 1)
        return level1.getCamera();
    else if (CurrLevel == 2)
        return level3.getCamera();
    else //not in a level
        return NULL;
}

double Levels::getCurrDoor(int door) {
    if (CurrLevel == 1)
        return level1.getCurrDoor(door);
    else //not in a level
        return 0;
}

void Levels::setCurrDoor(int door, double currDoor) {
    if (CurrLevel == 1)
        level1.setCurrDoor(door,currDoor);
}

int Levels::getLevelWidth() {
    if (CurrLevel == 1)
        return level1.getLevelWidth();
    else if (CurrLevel == 2)
        return level3.getLevelWidth();
    else //not in a level
        return 0;
}

int Levels::getLevelHeight() {
    if (CurrLevel == 1)
        return level1.getLevelHeight();
    else if (CurrLevel == 2)
        return level3.getLevelHeight();
    else //not in a level
        return 0;
}
