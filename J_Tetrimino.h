#ifndef J_TETRIMINO_H
#define J_TETRIMINO_H
#include "Tetrimino.h"

class J_Tetrimino : public Tetrimino {
public:
    J_Tetrimino(int startX, int startY);
    void draw() override;
};

#endif