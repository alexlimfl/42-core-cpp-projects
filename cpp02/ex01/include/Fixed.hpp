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
        int     getRawBits( void ) const; // that returns the raw value of the fixed-point value.
        void    setRawBits( int const raw );
        float	toFloat(void) const;
        int     toInt( void ) const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
