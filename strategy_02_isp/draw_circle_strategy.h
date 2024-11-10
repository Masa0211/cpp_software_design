#pragma once

class Circle;

class DrawCircleStrategy {
public:
    virtual ~DrawCircleStrategy() = default;

    virtual void draw(const Circle& circle /*some arguments*/) const = 0;
};
