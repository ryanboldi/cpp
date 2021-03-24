#include "reverse_string.h"

using namespace std;

namespace reverse_string {
    string reverse_string(string input){
        //string is an array of chars

        //construct a copy of input
        string reversed = string(input);
        int len = input.length();

        for (int i = 0; i < len; i++){
            reversed[i] = input[len - 1 - i];
        }
        return reversed;
    }
} 
