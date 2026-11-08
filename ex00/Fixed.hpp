#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed_point;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& copy);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed(void);
};

#endif