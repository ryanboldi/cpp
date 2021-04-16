#include "pangram.h"

namespace pangram
{
    bool is_pangram(std::string sentence)
    {
        std::unordered_set<char> lettersUsed;

        for (auto &letter : sentence)
        {
            if (isalpha(letter))
            {
                lettersUsed.insert(tolower(letter));
            }
        }

        return (lettersUsed.size() == 26);
    }
} // namespace pangram
