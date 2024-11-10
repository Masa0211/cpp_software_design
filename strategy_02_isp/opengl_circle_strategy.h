#pragma once

#include "circle.h"
#include "draw_circle_strategy.h"

class OpenGLDrawCircleStrategy : public DrawCircleStrategy {
public:
    explicit OpenGLDrawCircleStrategy(/* Drawing related arguments*/);

    void draw(const Circle& circle /*some arguments*/) const override;
};
