/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 02:14:00 by folim             #+#    #+#             */
/*   Updated: 2024/05/30 02:14:02 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
    // std::cout << "Default constructor called\n";
    this->_fp_value = 0;
}

Fixed::Fixed(int   nb){
    // std::cout << "Int constructor called\n";
    this->_fp_value = roundf(nb * (1 << this->_frac_bits));;
}

Fixed::Fixed(float   nb){
    // std::cout << "Float constructor called\n";
    this->_fp_value = roundf(nb * (1 << this->_frac_bits));
}

Fixed::Fixed(const Fixed &obj){
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj; // copy assignment operator
}

Fixed &Fixed::operator=(const Fixed &src)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->_fp_value = src._fp_value;
    return *this;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp_value);
}

void Fixed::setRawBits(int const raw){
    this->_fp_value = raw;
}

float	Fixed::toFloat(void)const{
	return ((float)this->_fp_value / (float)(1 << this->_frac_bits));
}

int	Fixed::toInt(void)const{
    return ((int)_fp_value / (int)(1 << this->_frac_bits));
}

std::ostream	&operator << (std::ostream &o, Fixed const &fixed){
	o << fixed.toFloat();
	return (o);
}

// The 6 comparison operators: >, <, >=, <=, == and !=.

        bool	Fixed::operator>(Fixed fixed) const{
            return (this->toFloat() > fixed.toFloat());
        }

        bool	Fixed::operator<(Fixed fixed) const{
            return (this->toFloat() < fixed.toFloat());
        }

        bool	Fixed::operator>=(Fixed fixed) const{
            return (this->toFloat() >= fixed.toFloat());
        }

        bool	Fixed::operator<=(Fixed fixed) const{
            return (this->toFloat() <= fixed.toFloat());
        }

        bool	Fixed::operator==(Fixed fixed) const{
            return (this->toFloat() == fixed.toFloat());
        }

        bool	Fixed::operator!=(Fixed fixed) const{
            return (this->toFloat() != fixed.toFloat());
        }

// The 4 arithmetic operators: +,-, *, and /.

        float   Fixed::operator+(Fixed obj) const{
            return (this->toFloat() + obj.toFloat());
        }

        float   Fixed::operator-(Fixed obj) const{
            return (this->toFloat() - obj.toFloat());
        }

        float   Fixed::operator*(Fixed obj) const{
            return (this->toFloat() * obj.toFloat());
        }

        float   Fixed::operator/(Fixed obj) const{
            return (this->toFloat() / obj.toFloat());
        }

// The pre-increment and post-increment operators.

        Fixed	Fixed::operator++(){
            this->_fp_value++;
            return (*this);
        }

        Fixed	Fixed::operator++(int){
            Fixed tmp = *this;
            // i = this->_fp_value;
            ++this->_fp_value;
            return (tmp);
        }

// The pre-decrement and post-decrement operators.

        Fixed	Fixed::operator--(){
            this->_fp_value--;
            return (*this);
        }

        Fixed	Fixed::operator--(int){
            Fixed tmp = *this;
            // i = this->_fp_value;
            --this->_fp_value;
            return (tmp);
        }


// four public overloaded member functions.

        Fixed	&Fixed::min(Fixed &first, Fixed &second){
            if (first.toFloat() <= second.toFloat())
                return (first);
            else
                return (second);
        }

        const Fixed	&Fixed::min(const Fixed &first, const Fixed &second){
            if (first.toFloat() <= second.toFloat())
                return (first);
            else
                return (second);
        }

        Fixed	&Fixed::max(Fixed &first, Fixed &second){
            if (first.toFloat() >= second.toFloat())
                return (first);
            else
                return (second);
        }

        const Fixed	&Fixed::max(const Fixed &first, const Fixed &second){
            if (first.toFloat() >= second.toFloat())
                return (first);
            else
                return (second);
        }
