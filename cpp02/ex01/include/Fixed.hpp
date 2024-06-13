/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 02:13:24 by folim             #+#    #+#             */
/*   Updated: 2024/06/13 16:38:46 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
    #define __FIXED_H__

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
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif