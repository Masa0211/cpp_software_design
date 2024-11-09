#pragma once

#include "draw_strategy.h"

class OpenGLStrategy : public DrawStragety {
public:
    OpenGLStrategy() = default;
    virtual ~OpenGLStrategy() = default;
    void draw(const Circle& circle /*some arguments*/) const override;
    void draw(const Square& square /*some arguments*/) const override;
};