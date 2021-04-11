#include "raindrops.h"

namespace raindrops
{
    std::string convert(int number)
    {
        std::string toReturn = "";

        if (number % 3 == 0)
            toReturn.append("Pling");

        if (number % 5 == 0)
            toReturn.append("Plang");

        if (number % 7 == 0)
            toReturn.append("Plong");

        if (toReturn == "")
        {
            return std::to_string(number);
        }

        return toReturn;
    }
} // namespace raindrops
