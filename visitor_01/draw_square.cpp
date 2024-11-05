#include "draw_square.h"
#include "square.h"

// include some graphic library

#include <iostream>

void draw(const Square& square)
{
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << square.side() << std::endl;
}
