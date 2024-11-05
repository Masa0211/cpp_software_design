#include "draw.h"
#include "shape_visitor.h"
#include "circle.h"
#include "square.h"

#include <iostream>

void Draw::visit(const Circle& s) const
{
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << s.radius() << std::endl;

}
void Draw::visit(const Square& s) const
{
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << s.side() << std::endl;
}
