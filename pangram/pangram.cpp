#include "pangram.h"

namespace pangram
{
    bool is_pangram(std::string sentence)
    {
        std::unordered_set<char> lettersUsed;

        for (auto it = sentence.begin(); it != sentence.end(); ++it)
        {
            if (isalpha(*it))
            {
                lettersUsed.insert(tolower(*it));
            }
        }

        return (lettersUsed.size() == 26);
    }
} // namespace pangram
