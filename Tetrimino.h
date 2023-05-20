#ifndef TETRIMINO_H
#define TETRIMINO_H
#include "Shape.h"

class Tetrimino : public Shape {
protected:
    int x, y;

public:
    Tetrimino(int startX, int startY);
    void draw() override = 0;
};

#endif 
