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
        return ((unsigned long long)1 << 63ULL) * 2 - 1;
    }
} // namespace grains
