#pragma once

#include "shape_visitor.h"

class Circle;
class Square;

class Draw : public ShapeVisitor {
public:
    Draw() = default;
    ~Draw() = default;

    virtual void visit(const Circle& s) const override;
    virtual void visit(const Square& s) const override;
};
