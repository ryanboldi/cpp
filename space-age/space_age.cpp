#include "space_age.h"

namespace space_age
{
    //named constants
    const double seconds_in_earth_year = 365.25 * 60 * 60 * 24;

    const double earth_years_in_mercury_period = 0.2408467;
    const double earth_years_in_venus_period = 0.61519726;
    const double earth_years_in_mars_period = 1.8808158;
    const double earth_years_in_jupiter_period = 11.862615;
    const double earth_years_in_saturn_period = 29.447498;
    const double earth_years_in_uranus_period = 84.016846;
    const double earth_years_in_neptune_period = 164.79132;

    double space_age::seconds() const
    {
        return age_in_seconds;
    }

    double space_age::on_earth() const
    {
        return age_in_seconds / seconds_in_earth_year;
    }

    double space_age::on_mercury() const
    {
        return on_earth() / earth_years_in_mercury_period;
    }

    double space_age::on_venus() const
    {
        return on_earth() / earth_years_in_venus_period;
    }

    double space_age::on_mars() const
    {
        return on_earth() / earth_years_in_mars_period;
    }

    double space_age::on_jupiter() const
    {
        return on_earth() / earth_years_in_jupiter_period;
    }

    double space_age::on_saturn() const
    {
        return on_earth() / earth_years_in_saturn_period;
    }

    double space_age::on_uranus() const
    {
        return on_earth() / earth_years_in_uranus_period;
    }

    double space_age::on_neptune() const
    {
        return on_earth() / earth_years_in_neptune_period;
    }
}
