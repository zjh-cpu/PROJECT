#ifndef T_TETRIMINO_H
#define T_TETRIMINO_H
#include "Tetrimino.h"

#include "Tetrimino.h"

class T_Tetrimino : public Tetrimino {
public:
    T_Tetrimino(int startX, int startY);
    void draw() override;
};


#endif