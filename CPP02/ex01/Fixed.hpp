#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(int const i);
    Fixed(float const f);
    Fixed(Fixed const & copy);
    ~Fixed();

    Fixed &      operator=(Fixed const &);
    int          getRawBits(void) const;
    void         setRawBits(int const raw);
    float        toFloat(void) const;
    int          toInt(void) const;

private:
    int                 _raw;
    static int const    _bits = 8;

};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);
#endif