#include "draw.h"
#include "circle.h"
#include "square.h"

#include <iostream>

void Draw::operator()(const Circle& s) const
{
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << s.radius() << std::endl;

}
void Draw::operator()(const Square& s) const
{
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << s.side() << std::endl;
}
