#pragma once

class Shape {
public:
    virtual ~Shape() = default;

    virtual void draw(/*some arguments*/) const = 0;
    /* ... potentially other functions */
};
