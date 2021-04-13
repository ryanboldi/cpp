#include "pangram.h"

namespace pangram
{
    bool is_pangram(std::string sentence)
    {
        //remove spaces and other non alpha letters
        sentence.erase(remove_if(sentence.begin(), sentence.end(),
                                 [](char c) { return !isalpha(c); }),
                       sentence.end());

        //make the sentence lowercase
        for (auto &letter : sentence)
        {
            letter = (tolower(letter));
        }

        auto start_address = &(*sentence.begin());
        auto end_address = &(*sentence.end());

        std::set<char> lettersUsed(start_address, end_address);

        return (lettersUsed.size() == 26);
    }
} // namespace pangram
