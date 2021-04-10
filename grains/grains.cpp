#include "grains.h"
#include <math.h>

namespace grains
{
    unsigned long long square(unsigned long long n)
    {
        //bitwise left shift AKA power of two
        return (unsigned long long)1 << (n - 1ULL);
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
