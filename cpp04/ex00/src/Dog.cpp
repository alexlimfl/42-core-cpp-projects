/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(): Animal() {
    this->type = "Dog";
    std::cout << "Constructor [Dog]\n";
}

Dog::Dog(const Dog &src): Animal() {
    std::cout << "Copy Constructor [Dog]\n";
    *this = src;
}

Dog &Dog::operator= (const Dog &src){
    std::cout << "Copy Assignment Operator [Dog]\n";
    if (this != &src){
        this->type = src.type;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Destructor [Dog]\n";
}

void    Dog::makeSound() const{
    std::cout << "Woof!\n";
}