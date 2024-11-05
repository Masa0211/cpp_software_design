#include "circle.h"

// include some graphic libraries here
// those were included in draw_circle.cpp in the procedural programming...

#include <iostream>

void Circle::draw() const
{
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << this->radius() << std::endl;
}
