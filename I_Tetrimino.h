#ifndef I_TETRIMINO_H
#define I_TETRIMINO_H
#include "Tetrimino.h"

class I_Tetrimino : public Tetrimino {
public:
    I_Tetrimino(int startX, int startY);
    void draw() override;
};

#endif