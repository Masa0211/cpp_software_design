#pragma once

class Shape;

class DrawStragety {
public:
    virtual ~DrawStragety() = default;

    // Polymophic interface. This looks nice but it requires dynamics cast internally...
    virtual void draw(const Shape& circle /*some common arguments*/) const = 0;
};
