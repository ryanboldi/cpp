#include "space_age.h"

namespace space_age
{
    space_age::space_age(double sec)
    {
        private_seconds = sec;
    }

    double space_age::seconds() const
    {
        return private_seconds;
    }

    double space_age::on_earth() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25);
    }

    double space_age::on_mercury() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 0.2408467);
    }

    double space_age::on_venus() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 0.61519726);
    }

    double space_age::on_mars() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 1.8808158);
    }

    double space_age::on_jupiter() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 11.862615);
    }

    double space_age::on_saturn() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 29.447498);
    }

    double space_age::on_uranus() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 84.016846);
    }

    double space_age::on_neptune() const
    {
        return private_seconds / (60 * 60 * 24 * 365.25 * 164.79132);
    }
}
