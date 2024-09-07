/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:51:02 by folim             #+#    #+#             */
/*   Updated: 2024/06/13 13:41:05 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default Constructor Called" << std::endl;
    this->_fp_value = 0;
}

Fixed::Fixed(const Fixed &obj){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src){
		this->_fp_value = src.getRawBits();
    }
	return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits()const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp_value);
}

void Fixed::setRawBits(int const raw){
    this->_fp_value = raw;
}
