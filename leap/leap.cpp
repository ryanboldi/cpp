#include "leap.h"
#include <iostream>

namespace leap {
    bool is_leap_year(int year) {
        if (divisible_by(year, 4)){
            if (divisible_by(year, 100) == false){
                return true;
            }
            else if (divisible_by(year, 400)){
                return true;
            }
            else {return false;}
        }
        else {return false;}
    }

    bool divisible_by(int num, int divisor) {
        if (num % divisor == 0){
            return true;
        }
        return false;
    }
}