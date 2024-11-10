#pragma once

#include "circle.h"
#include "draw_strategy.h"

class OpenGLDrawCircleStrategy : public DrawStrategy<Circle> {
public:
    explicit OpenGLDrawCircleStrategy(/* Drawing related arguments*/);

    void draw(const Circle& circle /*some arguments*/) const override;
};
