#pragma once

#include "point.h"
#include "shape.h"

#include <cassert>

class Square {
public:
    explicit Square(double side)
        : side_(side)
    {
        assert(side_ > 0.0);
    }

    double side() const { return side_; }
    Point center() const { return center_; }

private:
    double side_;
    Point center_{};
};
