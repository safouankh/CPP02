#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        ////////// for ex01
        Fixed(const int num);
        Fixed(const float num);
        float toFloat( void ) const;
        int toInt( void ) const;
        /////////////// for ex02
        bool operator>(const Fixed& copy) const;
        bool operator<(const Fixed& copy) const;
        bool operator>=(const Fixed& copy) const;
        bool operator<=(const Fixed& copy) const;
        bool operator==(const Fixed& copy) const;
        bool operator!=(const Fixed& copy) const;
        Fixed operator+(const Fixed& copy) const;
        Fixed operator-(const Fixed& copy) const;
        Fixed operator*(const Fixed& copy) const;
        Fixed operator/(const Fixed& copy) const;
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed&  min(Fixed& num1, Fixed& num2);
        static const Fixed&  min(const Fixed& num1, const Fixed& num2);
        static Fixed&  max(Fixed& num1, Fixed& num2);
        static const Fixed&  max(const Fixed& num1, const Fixed& num2);
        ///////////////
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed(void);
};


std::ostream& operator<<(std::ostream& output,const Fixed& copy);

#endif