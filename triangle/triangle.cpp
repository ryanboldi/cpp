#include "triangle.h"

namespace triangle
{
    flavor kind(double a, double b, double c)
    {
        std::array<double, 3> sides = {a, b, c};

        std::sort(std::begin(sides), std::end(sides));

        if (isIllegal(sides))
        {
            throw std::domain_error("triangle invalid");
        }
        else if (essentiallyEqual(a, b) && essentiallyEqual(b, c))
        {
            return flavor::equilateral;
        }
        else if (essentiallyEqual(a, b) || essentiallyEqual(b, c) || essentiallyEqual(a, c))
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

    bool essentiallyEqual(double a, double b)
    {
        double difference_tolerance = 0.0000001;

        return (fabs(a - b) <= difference_tolerance);
    }

} // namespace triangle
