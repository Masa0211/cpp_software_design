#pragma once

#include "square.h"
#include "draw_square_strategy.h"

class OpenGLDrawSquareStrategy : public DrawSquareStrategy {
public:
    explicit OpenGLDrawSquareStrategy(/* Drawing related arguments*/);

    void draw(const Square& square /*some arguments*/) const override;
};
#pragma once
