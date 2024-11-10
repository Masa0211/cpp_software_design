#include "opengl_circle_strategy.h"
#include "circle.h"
#include <iostream>

OpenGLDrawCircleStrategy::OpenGLDrawCircleStrategy(/* Drawing related arguments*/)
{}

void OpenGLDrawCircleStrategy::draw(const Circle& circle /*some arguments*/) const {
    // ... implementing the logic for drawing a circle
    std::cout << "drawing a circle with radius = " << circle.radius() << " using OpenGL" << std::endl;
}
