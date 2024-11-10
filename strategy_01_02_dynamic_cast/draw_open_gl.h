#pragma once

#include "draw_strategy.h"

class OpenGLStrategy : public DrawStragety {
public:
    OpenGLStrategy() = default;
    virtual ~OpenGLStrategy() = default;

    void draw(const Shape& shape /*some common arguments*/) const override;
};
