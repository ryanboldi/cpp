#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <string>
#include <set>
#include <ctype.h>
#include <algorithm>

namespace pangram
{
    bool is_pangram(std::string sentence);
} // namespace pangram

#endif // PANGRAM_H