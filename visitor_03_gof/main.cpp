#include "circle.h"
#include "square.h"
#include "draw_all_shapes.h"
#include <memory>
#include <vector>

int main()
{
    using Shapes = std::vector<std::unique_ptr<Shape>>;

    // Creating shapes
    Shapes shapes;
    shapes.reserve(3);
    shapes.emplace_back(std::make_unique<Circle>(2.3));
    shapes.emplace_back(std::make_unique<Square>(1.2));
    shapes.emplace_back(std::make_unique<Circle>(4.1));

    drawAllShapes(shapes);

    return EXIT_SUCCESS;
}
