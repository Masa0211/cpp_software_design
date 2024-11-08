#pragma once

class Circle;
class Square;

struct Draw {
    void operator()(const Circle& s) const;
    void operator()(const Square& s) const;
};
