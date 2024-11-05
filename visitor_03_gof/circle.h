#pragma once

#include "point.h"
#include "shape.h"
#include "shape_visitor.h"

#include <cassert>

class Circle : public Shape {
public:
    explicit Circle(const double radius)
        : Shape()
        , radius_(radius)
    {
        assert(radius_ > 0.0);
    }

    double radius() const { return radius_; }
    Point center() const { return center_; }

    void accept(const ShapeVisitor& v) const override { v.visit(*this); }

private:
    double radius_;
    Point center_{};
};
