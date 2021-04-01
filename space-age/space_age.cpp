#include "space_age.h"

space_age::space_age::space_age(double sec)
{
    space_age::private_seconds = sec;
}

double space_age::space_age::seconds() const
{
    return space_age::private_seconds;
}
