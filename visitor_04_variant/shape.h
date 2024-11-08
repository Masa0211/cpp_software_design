#pragma once

#include "circle.h"
#include "square.h"
#include <variant>

/*
* We were using the unique_ptr for abstraction.
* But here using variant instead.
*/

using Shape = std::variant<Circle, Square>;
