#include "triangle.h"

namespace triangle
{
    flavor kind(double a, double b, double c)
    {
        //create array to store the triangle sides
        std::array<double, 3> sides = {a, b, c};

        //sort the array
        std::sort(std::begin(sides), std::end(sides));

        //check for illegal triangle:
        if (isIllegal(sides))
        {
            throw std::domain_error("triangle invalid");
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

    bool isIllegal(std::array<double, 3> sides)
    {
        //check if the smallest side is shorter than 0, or that the largest side is bigger than the smaller two.
        return (sides[0] <= 0 || sides[0] + sides[1] < sides[2]);
    }

} // namespace triangle
