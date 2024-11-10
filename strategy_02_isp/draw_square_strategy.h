#pragma once

class Square;

class DrawSquareStrategy {
public:
    virtual ~DrawSquareStrategy() = default;

    virtual void draw(const Square& square /*some arguments*/) const = 0;
};
