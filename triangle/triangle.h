#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <stdexcept>
#include <array>
#include <algorithm>

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
} // namespace triangle

#endif // TRIANGLE_H