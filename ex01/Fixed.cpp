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
    // std::cout << "setRawBits member function called\n";
    fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    return (fixed_point);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    this->operator=(copy);
}
//////////////////////
Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    fixed_point = num * (1 << bits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
    fixed_point = roundf(num * (1 << bits));
}

float Fixed::toFloat( void ) const
{
    return ((float)fixed_point / (1 << bits));
}

int Fixed::toInt( void ) const
{
    return (fixed_point / (1 << bits));
}

std::ostream& operator<<(std::ostream& output,const Fixed& copy)
{
    output << copy.toFloat();
    return (output);
}
