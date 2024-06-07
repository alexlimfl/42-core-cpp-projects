/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 02:13:53 by folim             #+#    #+#             */
/*   Updated: 2024/05/30 02:13:54 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../include/Fixed.hpp"
#include <iostream>

class Fixed{
    private:
        int                 _fp_value;
        static const int    _frac_bits = 8;
    
    public:
    Fixed(){
        std::cout << "Default constructor called\n";
        this->_fp_value = 0;
    }
    
    Fixed(int   nb){
        std::cout << "Int constructor called\n";
        this->_fp_value = nb;
    }
    
    Fixed(float   nb){
        std::cout << "Float constructor called\n";
        this->_fp_value = nb;
    }

    Fixed(const Fixed &obj){
        std::cout << "Copy constructor called" << std::endl;
        *this = obj; // copy assignment operator
    }

    Fixed &operator=(const Fixed &src)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &src)
            this->_fp_value = src._fp_value;
        return *this;
    }

    ~Fixed(){
        std::cout << "Destructor called" << std::endl;
    }

    friend  std::ostream    &operator << (std::ostream& os, const Fixed obj){
        os << obj.toFloat();
        return os;
    }

    float toFloat( void ) const{
        return ((float)this->_fp_value / (float)(1 << this->_frac_bits));
    }
};



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

    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
 
