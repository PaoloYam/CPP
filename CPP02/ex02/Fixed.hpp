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
    bool         operator>(Fixed const & rhs) const;
    bool         operator<(Fixed const & rhs) const;
    bool         operator>=(Fixed const & rhs) const;
    bool         operator<=(Fixed const & rhs) const;
    bool         operator==(Fixed const & rhs) const;
    bool         operator!=(Fixed const & rhs) const;
    Fixed        operator+(Fixed const & rhs) const;
    Fixed        operator-(Fixed const & rhs) const;
    Fixed        operator*(Fixed const & rhs) const;
    Fixed        operator/(Fixed const & rhs) const;
    Fixed &      operator++();
    Fixed        operator++(int);
    Fixed &      operator--();
    Fixed        operator--(int);

    int          getRawBits(void) const;
    void         setRawBits(int const raw);
    float        toFloat(void) const;
    int          toInt(void) const;
    static const Fixed & min(Fixed const & lhs, Fixed const & rhs);
    static const Fixed & max(Fixed const & lhs, Fixed const & rhs);
    static Fixed & min(Fixed & lhs, Fixed & rhs);
    static Fixed & max(Fixed & lhs, Fixed & rhs);
      

private:
    int                 _raw;
    static int const    _bits = 8;

};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs);
#endif