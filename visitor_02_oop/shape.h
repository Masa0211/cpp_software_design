#pragma once

/*
ShapeType has been removed!
enum class ShapeType
{
    CIRCLE,
    SQUARE
};
*/

// Easy to add new types (shapes)
// but difficult to add new methods
// because new methods are added in the base class,
// all derived classes need to be modified!

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default;
    virtual void draw() const = 0; // the virtual method has been added

    // getType() has been removed!
    // ShapeType getType() const { return type_; }

};
