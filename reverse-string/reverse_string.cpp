#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string input){
        std::string reversed(input.rbegin(), input.rend());
        return reversed;
    }
} 
