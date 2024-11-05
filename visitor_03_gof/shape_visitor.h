#pragma once

class Circle;
class Square;

class ShapeVisitor
{
public:
    virtual ~ShapeVisitor() = default;

    /*
    * Possibly more visit() functions, one for each concrete shape.
    * This is a drawback of the GOF visitor pattern.
    * If a new class derived from Shape is added,
    * we need to update ShapeVisitor and its derived classes (Draw for example) as well.
    * This breaks the open-closed principle.
    * 
    * Also,
    *    void visit(const Shape& s)
    * does not work in this case.
    * This is because each derived class has non-abstract methods.
    * 
    */
    virtual void visit(const Circle&) const = 0;
    virtual void visit(const Square&) const = 0;
    // 
};
