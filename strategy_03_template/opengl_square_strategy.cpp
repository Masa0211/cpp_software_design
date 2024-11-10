#include "opengl_square_strategy.h"
#include "square.h"
#include <iostream>

OpenGLDrawSquareStrategy::OpenGLDrawSquareStrategy(/* Drawing related arguments*/)
{}

void OpenGLDrawSquareStrategy::draw(const Square& square /*some arguments*/) const {
    // ... implementing the logic for drawing a square
    std::cout << "drawing a square with side = " << square.side() << " using OpenGL" << std::endl;
}
