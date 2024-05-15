/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:51:02 by folim             #+#    #+#             */
/*   Updated: 2024/05/15 18:57:11 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(): _fp_value(0){
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &obj): _fp_value(obj._fp_value){
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &other){
    
    std::cout << "Copy assignment operator called" << std::endl;
    if (other._fp_value != this->_fp_value)
        this->_fp_value = other._fp_value;
    return (*this);
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp_value);
}

void Fixed::setRawBits(int const raw){
    this->_fp_value = raw;
}
