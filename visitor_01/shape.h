#pragma once

enum class ShapeType
{
    CIRCLE,
    SQUARE
};

class Shape {
protected:
    explicit Shape(const ShapeType type)
        : type_(type)
    {}

public:
    virtual ~Shape() = default;
    ShapeType getType() const { return type_; }

private:
    ShapeType type_;
};
