#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed& copy)
{
    this->fixed_point = copy.getRawBits();
    return (*this);
}

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::~Fixed(void)
{
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
    this->operator=(copy);
}

////////////////////// for ex01

Fixed::Fixed(const int num)
{
    fixed_point = num * (1 << bits);
}

Fixed::Fixed(const float num)
{
    fixed_point = roundf(num * (1 << bits));
}

float Fixed::toFloat( void ) const
{
    float temp = fixed_point;
    return (temp / (1 << bits));
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

/////////////// for ex02
Fixed Fixed::operator+(const Fixed& copy) const
{
    return (Fixed(fixed_point + copy.fixed_point));
}
Fixed Fixed::operator-(const Fixed& copy) const
{
    return (Fixed(fixed_point - copy.fixed_point));
}
Fixed Fixed::operator*(const Fixed& copy) const
{
    return (Fixed(this->toFloat() * copy.toFloat()));
}
Fixed Fixed::operator/(const Fixed& copy) const
{
    return (Fixed(fixed_point / copy.fixed_point));
}
bool Fixed::operator>(const Fixed& copy) const
{
    return fixed_point > copy.fixed_point;
}

bool Fixed::operator<(const Fixed& copy) const
{
    return fixed_point < copy.fixed_point;
}

bool Fixed::operator>=(const Fixed& copy) const
{
    return fixed_point >= copy.fixed_point;
}

bool Fixed::operator<=(const Fixed& copy) const
{
    return fixed_point <= copy.fixed_point;
}

bool Fixed::operator==(const Fixed& copy) const
{
    return fixed_point == copy.fixed_point;
}

bool Fixed::operator!=(const Fixed& copy) const
{
    return fixed_point != copy.fixed_point;
}


Fixed& Fixed::operator++()
{
    this->fixed_point++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->fixed_point--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    this->fixed_point++;
    return (old);
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    this->fixed_point--;
    return (old);
}

Fixed&  Fixed::min(Fixed& num1, Fixed& num2)
{
    if (num1 < num2)
        return (num1);
    return num2;
}

const Fixed&  Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if (num1 < num2)
        return (num1);
    return num2;
}

Fixed&  Fixed::max(Fixed& num1, Fixed& num2)
{
    if (num1 > num2)
        return (num1);
    return num2;
}

const Fixed&  Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if (num1 > num2)
        return (num1);
    return num2;
}
