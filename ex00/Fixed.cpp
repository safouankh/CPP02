#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    this->fixed_point = copy.getRawBits();
    return (*this);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixed_point = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
    fixed_point = 0;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (fixed_point);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    this->operator=(copy);
}
