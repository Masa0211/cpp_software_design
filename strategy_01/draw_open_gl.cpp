#include "draw_open_gl.h"
#include "circle.h"
#include "square.h"
#include <iostream>

void OpenGLStrategy::draw(const Circle& circle /*some arguments*/) const {
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << circle.radius() << " using OpenGL" << std::endl;
}

void OpenGLStrategy::draw(const Square& square /*some arguments*/) const {
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << square.side() << " using OpenGL" << std::endl;
}
