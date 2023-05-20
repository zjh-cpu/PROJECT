#ifndef L_TETRIMINO_H
#define L_TETRIMINO_H
#include "Tetrimino.h"

class L_Tetrimino : public Tetrimino {
public:
    L_Tetrimino(int startX, int startY);
    void draw() override;
};

#endif