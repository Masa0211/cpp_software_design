#pragma once

#include "draw_strategy.h"

class OpenGLStrategy : public DrawStragety {
public:
    OpenGLStrategy() = default;
    virtual ~OpenGLStrategy() = default;

    // draw needs to be modified if a new shape is added!
    void draw(const Circle& circle /*some arguments*/) const override;
    void draw(const Square& square /*some arguments*/) const override;
};
