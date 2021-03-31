#include "space_age.h"

space_age::space_age::space_age(double sec)
{
    space_age::private_seconds = sec;
}

const double space_age::space_age::seconds()
{
    return space_age::private_seconds;
}
