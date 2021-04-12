#include "raindrops.h"

namespace raindrops
{
    std::string convert(int number)
    {

        std::array<std::pair<int, std::string>, 3> sounds;
        sounds[0] = std::pair<int, std::string>(3, "Pling");
        sounds[1] = std::pair<int, std::string>(5, "Plang");
        sounds[2] = std::pair<int, std::string>(7, "Plong");

        std::string toReturn = "";

        for (unsigned int i = 0; i < sounds.size(); i++)
        {
            if (number % sounds[i].first == 0)
            {
                toReturn.append(sounds[i].second);
            }
        }

        if (toReturn.empty())
        {
            return std::to_string(number);
        }

        return toReturn;
    }
} // namespace raindrops
