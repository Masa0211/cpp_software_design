#pragma once

#include "point.h"
#include "shape.h"
#include "shape_visitor.h"

#include <cassert>

class Square : public Shape {
public:
    explicit Square(double side)
        : side_(side)
    {
        assert(side_ > 0.0);
    }

    double side() const { return side_; }
    Point center() const { return center_; }

    void accept(const ShapeVisitor& v) const override { v.visit(*this); }

private:
    double side_;
    Point center_{};
};
