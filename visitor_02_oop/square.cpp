#include "square.h"

// include some graphic libraries here
// those were included in draw_square.cpp in the procedural programming...

#include <iostream>

void Square::draw() const
{
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << this->side() << std::endl;
}
