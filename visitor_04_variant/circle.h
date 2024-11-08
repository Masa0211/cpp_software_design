#pragma once

#include "point.h"
#include "shape.h"

#include <cassert>

// not derived class anymore!
class Circle {
public:
    explicit Circle(const double radius)
        : radius_(radius)
    {
        assert(radius_ > 0.0);
    }

    double radius() const { return radius_; }
    Point center() const { return center_; }

private:
    double radius_;
    Point center_{};
};
