#pragma once

class Circle;
class Square;

class DrawStragety {
public:
    virtual ~DrawStragety() = default;

    virtual void draw(const Circle& circle /*some arguments*/) const = 0;
    virtual void draw(const Square& square /*some arguments*/) const = 0;
};
