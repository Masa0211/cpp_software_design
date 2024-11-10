#include "shape.h"
#include "circle.h"
#include "square.h"
#include "draw_open_gl.h"
#include "draw_all_shapes.h"
#include <memory>
#include <vector>

int main()
{
    // Creating shapes
    Shapes shapes;
    //shapes.reserve(3);

    //shapes.emplace_back(std::make_unique<Circle>(2.3, std::move(std::make_unique<OpenGLStrategy>())));
    shapes.emplace_back(std::make_unique<Circle>(2.3, std::make_unique<OpenGLStrategy>()));
    shapes.emplace_back(std::make_unique<Square>(1.2, std::make_unique<OpenGLStrategy>()));
    shapes.emplace_back(std::make_unique<Circle>(4.1, std::make_unique<OpenGLStrategy>()));

    drawAllShapes(shapes);

    return EXIT_SUCCESS;
}
