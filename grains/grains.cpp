#include "grains.h"
#include <math.h>

namespace grains
{
    unsigned long long square(unsigned long long n)
    {
        unsigned long long base = 2;

        return pow(base, n - 1);
    }

    unsigned long long total()
    {
        unsigned long long totalSoFar = 0;
        for (int i = 1; i < 65; i++)
        {
            totalSoFar += square(i);
        }
        return totalSoFar;
    }
} // namespace grains
