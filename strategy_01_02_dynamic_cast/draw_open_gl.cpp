#include "draw_open_gl.h"
#include "circle.h"
#include "square.h"
#include <iostream>

void OpenGLStrategy::draw(const Shape& shape /*some common arguments*/) const {
    /*
    * The interface of draw(Shape) is clean.
    * On the other hand, since each derived class has its own method,
    * we need to down-cast it.
    * But dymamic_cast is very costly...
    * 
    * This implementation also breaks the open-closed principle.
    */
    if (const auto* s = dynamic_cast<const Circle*>(&shape)) {
        // ... implementing the logic for drawing a circle
        std::cout << "drawing a circle with radius = " << s->radius() << " using OpenGL" << std::endl;
    }
    else if (const auto* s = dynamic_cast<const Square*>(&shape)) {
        // ... implementing the logic for drawing a square
        std::cout << "drawing a square with side = " << s->side() << " using OpenGL" << std::endl;
    }
    else {
        throw std::invalid_argument("shape is unrecognized type");
    }
}
