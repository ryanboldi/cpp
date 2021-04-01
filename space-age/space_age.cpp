#include "space_age.h"

namespace space_age
{
    //is this the correct place to put named constants?
    const double SECONDS_IN_EARTH_YEAR = 365.25 * 60 * 60 * 24;

    const double MERCURY_PERIOD = 0.2408467;
    const double VENUS_PERIOD = 0.61519726;
    const double MARS_PERIOD = 1.8808158;
    const double JUPITER_PERIOD = 11.862615;
    const double SATURN_PERIOD = 29.447498;
    const double URANUS_PERIOD = 84.016846;
    const double NEPTUNE_PERIOD = 164.79132;

    double space_age::seconds() const
    {
        return age_in_seconds;
    }

    double space_age::on_earth() const
    {
        return age_in_seconds / (SECONDS_IN_EARTH_YEAR);
    }

    double space_age::on_mercury() const
    {
        return on_earth() / MERCURY_PERIOD;
    }

    double space_age::on_venus() const
    {
        return on_earth() / VENUS_PERIOD;
    }

    double space_age::on_mars() const
    {
        return on_earth() / MARS_PERIOD;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / JUPITER_PERIOD;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / SATURN_PERIOD;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / URANUS_PERIOD;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / NEPTUNE_PERIOD;
    }
}
