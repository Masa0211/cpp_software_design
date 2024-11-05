#include "draw_circle.h"
#include "circle.h"

// include some graphic library

#include <iostream>

void draw(const Circle& circle)
{
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << circle.radius() << std::endl;
}
