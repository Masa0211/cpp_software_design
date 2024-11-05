#pragma once

// Easy to add procedures because those are handled in ShapeVisitor
// But not easy to add new types (new classes derived from Shape)
// because ShapeVisitor needs visit() method for each type

class ShapeVisitor;

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default;
    // virtual void draw() const = 0; // draw() has been removed

    // Accept a shape visitor:
    // the shape visitor has visit(const DerivedClass& v) methods for each derived class
    // the visit method implements the operation
    virtual void accept(const ShapeVisitor& v) const = 0;
};
