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
        //////////
        Fixed(const int num);
        Fixed(const float num);
        float toFloat( void ) const;
        int toInt( void ) const;
        ///////////////////
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed(void);
};

std::ostream& operator<<(std::ostream& output,const Fixed& copy);

#endif