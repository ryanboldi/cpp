#include "triangle.h"

namespace triangle
{
    //helper function declarations
    bool isIllegal(std::array<double, 3> sides);
    bool essentiallyEqual(double a, double b);

    flavor kind(double a, double b, double c)
    {
        std::array<double, 3> sides = {a, b, c};

        std::sort(std::begin(sides), std::end(sides));

        if (isIllegal(sides))
        {
            throw std::domain_error("triangle invalid");
        }
        //checks if biggest side and smallest side are essentially equal (and therefore also the middle one)
        else if (essentiallyEqual(sides[2], sides[0]))
        {
            return flavor::equilateral;
        }
        else if (essentiallyEqual(sides[0], sides[1]) || essentiallyEqual(sides[1], sides[2]))
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
        //use a relative epsilon
        double epsilon = 0.000001 * std::max(std::abs(a), std::abs(b));

        return (std::abs(a - b) <= epsilon);
    }

} // namespace triangle
