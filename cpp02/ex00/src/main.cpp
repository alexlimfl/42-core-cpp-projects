/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:50:41 by folim             #+#    #+#             */
/*   Updated: 2024/06/13 13:40:46 by folim            ###   ########.fr       */
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
   return 0;
 }


//  int main( void ) {
//    Fixed a;
//    a.test = "TestA";
//    Fixed b( a );
//    a.test = "TestB";
//    Fixed c;
//    c = b;
//    b.test = "TestC";

//    std::cout << a.test << std::endl;
//    std::cout << b.test << std::endl;
//    std::cout << c.test << std::endl;

//    return 0;
//  }