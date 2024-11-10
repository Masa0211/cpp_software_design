#include "draw_all_shapes.h"

#include "shape.h"
#include "draw_strategy.h"
#include "circle.h"
#include "square.h"

void drawAllShapes(const Shapes& shapes)
{
    for (const auto& shape : shapes)
    {
        shape->draw();
    }
}
