#pragma once

#include "point.h"
#include "shape.h"
#include "draw_strategy.h"

#include <cassert>
#include <memory>

class Square : public Shape {
public:
    explicit Square(double side, std::unique_ptr<DrawStragety> drawer)
        : side_(side)
        , drawer_(std::move(drawer))
    {
        assert(side_ > 0.0);
        assert(drawer_ != nullptr);
    }

    void draw(/*some arguments*/) const override {
        // delegate to the stragety instance
        drawer_->draw(*this /*some arguments*/);
    }

    double side() const { return side_; }
    Point center() const { return center_; }

private:
    double side_;
    std::unique_ptr<DrawStragety> drawer_;
    Point center_{};
};
