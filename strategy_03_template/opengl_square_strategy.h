#pragma once

#include "square.h"
#include "draw_strategy.h"

class OpenGLDrawSquareStrategy : public DrawStrategy<Square> {
public:
    explicit OpenGLDrawSquareStrategy(/* Drawing related arguments*/);

    void draw(const Square& square /*some arguments*/) const override;
};
