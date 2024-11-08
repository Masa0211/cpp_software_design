#include "draw_all_shapes.h"

#include "shapes.h"
#include "draw.h"
#include "circle.h"
#include "square.h"

void drawAllShapes(const Shapes& shapes)
{
    for (const auto& shape : shapes)
    {
        // 1) std::visit() takes a functor
        // std::visit(Draw{}, shape);

        // 2) or get_if
        Draw draw{};
        if (const Circle* s = std::get_if<Circle>(&shape)) {
            draw(*s);
        }
        else if (const Square* s = std::get_if<Square>(&shape)) {
            draw(*s);
        }
    }
}
