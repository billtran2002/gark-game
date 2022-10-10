#ifndef GAME_H_
#define GAME_H_

#include "Gark.h"

class Mesa;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nGarks);
    ~Game();

    // Mutators
    void play();

private:
    Mesa* m_mesa;

    History* h_history;
};

#endif