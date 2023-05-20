#ifndef O_TETRIMINO_H
#define o_TETRIMINO_H
#include "Tetrimino.h"

class O_Tetrimino : public Tetrimino {
public:
    O_Tetrimino(int startX, int startY);
    void draw() override;
};

#endif