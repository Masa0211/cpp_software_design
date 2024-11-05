#include "draw_all_shapes.h"

#include "draw.h"
#include "circle.h"
#include "square.h"

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (const auto& shape : shapes)
    {
        // no need of the enum and switch!
        shape->accept(Draw{});
    }
}
