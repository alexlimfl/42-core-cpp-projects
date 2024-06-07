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
   return 0;
 }

/*
 Shallow Copy (via copy assignment operator):
    Both objects' data members point to the same data array on the heap.
    Changes in one object will affect the other since they share the same memory location.
 
 Deep Copy (via copy constructor):
    Each object gets its own copy of the data array on the heap.
    Changes in one object will not affect the other since they have separate memory locations.
 
 Copy Assignment Operator:
    Assigns one existing object to another existing object.
    By default, it performs a shallow copy (member-wise assignment).
    Needs to be overloaded to perform a deep copy if the object contains pointers to dynamically allocated memory.
 
 Copy Constructor:
    Initializes a new object as a copy of an existing object.
    Takes a reference to an object of the same class as a parameter.
    By default, it performs a shallow copy.
    Needs to be defined to perform a deep copy if the object contains pointers to dynamically allocated memory.
*/
