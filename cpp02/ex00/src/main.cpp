/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:50:41 by folim             #+#    #+#             */
/*   Updated: 2024/05/15 19:19:27 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    // c = 123;
    std::cout << c.getRawBits() << std::endl;
    // c.getRawBits(1234);
    return 0;
}
