#pragma once

#include <memory>
#include <vector>

class Shape;

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes);
