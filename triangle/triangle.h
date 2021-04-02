#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <stdexcept>
#include <array>
#include <algorithm>
#include <math.h>

namespace triangle
{
    enum class flavor
    {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c);
    bool isIllegal(std::array<double, 3> sides);
    bool essentiallyEqual(double a, double b);
} // namespace triangle

#endif // TRIANGLE_H