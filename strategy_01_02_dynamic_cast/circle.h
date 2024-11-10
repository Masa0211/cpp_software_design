#pragma once

#include "point.h"
#include "shape.h"
#include "draw_strategy.h"

#include <cassert>
#include <memory>

// not derived class anymore!
class Circle : public Shape {
public:
    explicit Circle(const double radius, std::unique_ptr<DrawStragety> drawer)
        : radius_(radius)
        , drawer_(std::move(drawer))
    {
        assert(radius_ > 0.0);
        assert(drawer_ != nullptr);
    }

    void draw(/*some arguments*/) const override {
        // delegate to the stragety instance
        drawer_->draw(*this /*some arguments*/);
    }

    double radius() const { return radius_; }
    Point center() const { return center_; }

private:
    double radius_;
    std::unique_ptr<DrawStragety> drawer_;
    Point center_{};
};
