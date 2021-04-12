#include "raindrops.h"

namespace raindrops
{

    std::array<std::pair<int, std::string>, 3> sounds{
        {{3, "Pling"},
         {5, "Plang"},
         {7, "Plong"}}};

    std::string convert(int number)
    {
        std::string toReturn = "";

        for (auto &factor_sound : sounds)
        {
            if (number % factor_sound.first == 0)
            {
                toReturn.append(factor_sound.second);
            }
        }

        if (toReturn.empty())
        {
            return std::to_string(number);
        }

        return toReturn;
    }
} // namespace raindrops
