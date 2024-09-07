/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:51:26 by folim             #+#    #+#             */
/*   Updated: 2024/06/13 13:41:13 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
    #define __FIXED_H__

#include <iostream>

class Fixed{
    private:
        int                 _fp_value;
        static const int    _frac_bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &obj);
        Fixed &operator= (const Fixed &other);
        ~Fixed(void);
        int getRawBits( void ) const; // that returns the raw value of the fixed-point value.
        void setRawBits( int const raw ); // that sets the raw value of the fixed-point number.
        // std::string         test;
};

#endif
