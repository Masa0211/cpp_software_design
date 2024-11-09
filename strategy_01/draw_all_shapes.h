#pragma once

#include "shape.h"
#include <memory>
#include <vector>

using Shapes = std::vector<std::unique_ptr<Shape>>;

void drawAllShapes(const Shapes& shapes);
