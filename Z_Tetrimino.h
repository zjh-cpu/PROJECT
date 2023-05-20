#ifndef Z_TERTIMINO_H
#define Z_TERTIMINO_H
#include "Tetrimino.h"

class Z_Tetrimino : public Tetrimino {
public:
    Z_Tetrimino(int startX, int startY);
    void draw() override;
};


#endif