#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(Fixed const & copy);
    ~Fixed();

    Fixed &      operator=(Fixed const &);
    int          getRawBits(void) const;
    void         setRawBits(int const raw);

private:
    int                 _raw;
    static int const    _bits = 8;

};

#endif