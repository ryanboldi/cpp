#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age
{
    class space_age
    {
        double private_seconds;

    public:
        space_age(double sec);

        double seconds() const;
    };
}

#endif // SPACE_AGE_H