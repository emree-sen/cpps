#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedPointNumber = 0;
}

Fixed::Fixed(const int value)
{
    fixedPointNumber = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
    fixedPointNumber = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        fixedPointNumber = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int const raw)
{
    fixedPointNumber = raw;
}

int Fixed::getRawBits(void) const
{
    return fixedPointNumber;
}

float Fixed::toFloat(void) const
{
    return (float)fixedPointNumber / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return fixedPointNumber >> fractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}