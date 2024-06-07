/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 02:13:24 by folim             #+#    #+#             */
/*   Updated: 2024/05/30 02:13:25 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int                 _fp_value;
        static const int    _frac_bits = 8;

    public:
        Fixed();
        Fixed(int   nb);
        Fixed(float nb);
        Fixed(const Fixed   &obj);
        Fixed &operator=(const Fixed &src);
        ~Fixed();
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float	toFloat(void) const;
        int     toInt( void ) const;

        // The 6 comparison operators: >, <, >=, <=, == and !=.

            bool	operator>(Fixed fixed) const;
            bool	operator<(Fixed fixed) const;
            bool	operator>=(Fixed fixed) const;
            bool	operator<=(Fixed fixed) const;
            bool	operator==(Fixed fixed) const;
            bool	operator!=(Fixed fixed) const;


        // The 4 arithmetic operators: +,-, *, and /.

            float   operator+(Fixed obj) const;
            float   operator-(Fixed obj) const;
            float   operator*(Fixed obj) const;
            float   operator/(Fixed obj) const;

        // The pre-increment and post-increment operators.

            Fixed	operator++(void);
            Fixed   operator++(int);

        // The pre-decrement and post-decrement operators.

            Fixed   operator--(void);
            Fixed   operator--(int);

        // four public overloaded member functions.
            
            static Fixed &min(Fixed &first, Fixed &second);
            static const Fixed &min(Fixed const &first, Fixed const &second);
            static Fixed &max(Fixed &first, Fixed &second);
            static const Fixed &max(Fixed const &first, const Fixed &second);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
