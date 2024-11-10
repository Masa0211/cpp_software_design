#include "shape.h"
#include "circle.h"
#include "square.h"
#include "opengl_circle_strategy.h"
#include "opengl_square_strategy.h"
#include "draw_all_shapes.h"
#include <memory>
#include <vector>

int main()
{
    // Creating shapes
    Shapes shapes;
    shapes.reserve(3);

    shapes.emplace_back(std::make_unique<Circle>(2.3, std::make_unique<OpenGLDrawCircleStrategy>()));
    shapes.emplace_back(std::make_unique<Square>(1.2, std::make_unique<OpenGLDrawSquareStrategy>()));
    shapes.emplace_back(std::make_unique<Circle>(4.1, std::make_unique<OpenGLDrawCircleStrategy>()));

    drawAllShapes(shapes);

    return EXIT_SUCCESS;
}
