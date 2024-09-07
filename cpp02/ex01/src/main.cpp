/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 02:13:53 by folim             #+#    #+#             */
/*   Updated: 2024/06/14 18:17:51 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) {
    Fixed       a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
 
/*
    Notes

    Integer:
        Whole number
        int 5 => 00000101 (in 8-bit binary)
        int -5 =>  00000101 invert (flip) => 11111010 + 1 => 11111011
        Fixed precision and range (limited by the number of bits).
        Fast and simple arithmatic operation computations
    

    Floating point:
        Represents wide range of values, especially numbers integer can't present precisely
        Components: Sign-bit(+/-), Exponent (Position of decimal points), Mantissa (Number significance digits)
        3.14159, -0.0001, 2.71828
        32-bit representation fo 1.25 => 0 01111111 01000000000000000000000
        Usage: Scientific calculations, graphics, simulations where precision and range are crucial.
        Variable precision and very wide range, suitable for a broad spectrum of values.
        Slower and complex operations, but precise and wide range.

    Fixed point:
        Represents digits numbers after the radix point (decimal point in base-10, binary point in base-2).
        Components: Integer part (Whole number component), Fractional part (Fixed number of fractional digits)
        Fixed precision with predictable behavior, suitable for specific ranges of values where exact precision is required.
        Often faster than integer.

    Non-fixed point to fixed point using Multiplication by 2 ** F.
        Scales the number so that the fractional part is converted into integer representation.
        Shifting decimal point F places to right.
        If F = 8, fixed-point format => 16 bits => 8.8

        Example:
            F = 8
            42.42f * 2 ** 8 = 42.42 * 256 = 10859.52 => 101010.0110
            Binary representation in 8.8 fixed-point format:
                Integer part:       00101010
                Fractional part:    01100000
                Combined:           00101010.01100000
                
*/