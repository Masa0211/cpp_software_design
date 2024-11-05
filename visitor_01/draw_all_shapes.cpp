#include "draw_all_shapes.h"

#include "circle.h"
#include "square.h"
#include "draw_circle.h"
#include "draw_square.h"

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
    for (const auto& shape : shapes)
    {
        switch (shape->getType())
        {
        case ShapeType::CIRCLE:
        {
            draw(static_cast<const Circle&>(*shape));
            break;
        }
        case ShapeType::SQUARE:
        {
            draw(static_cast<const Square&>(*shape));
            break;
        }
        default:
        {
            throw;
            break;
        }
        }
    }
}
