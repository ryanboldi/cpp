#include "triangle.h"
#include <stdexcept>

namespace triangle
{
    flavor kind(double a, double b, double c)
    {
        //check for illegal triangle:
        if (a <= 0 || b <= 0 || c <= 0 || (a + b) < c || (b + c) < a || (c + a) < b)
        {
            throw std::domain_error("triangle invalid");
            return flavor::illegal;
        }
        else if (a == b && b == c)
        {
            return flavor::equilateral;
        }
        else if (a == b || b == c || a == c)
        {
            return flavor::isosceles;
        }
        else
        {
            return flavor::scalene;
        }
    }

} // namespace triangle
