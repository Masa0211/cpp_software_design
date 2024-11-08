#include "shapes.h"
#include "circle.h"
#include "square.h"
#include "draw_all_shapes.h"
#include <memory>
#include <vector>

int main()
{
    // Creating shapes
    Shapes shapes;
    shapes.reserve(3);
    shapes.emplace_back(Circle{ 2.3 });
    shapes.emplace_back(Square{ 1.2 });
    shapes.emplace_back(Circle{ 4.1 });

    drawAllShapes(shapes);

    return EXIT_SUCCESS;
}
