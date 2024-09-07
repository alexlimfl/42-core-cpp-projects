/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(){
    std::cout << "Constructor [Animal]\n";
}

Animal::Animal(const Animal &src){
    std::cout << "Copy Constructor [Animal]\n";
    *this = src;
}

Animal &Animal::operator= (const Animal &src){
    std::cout << "Copy Assignment Operator [Animal]\n";
    if (this != &src){
        this->type = src.type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Destructor [Animal]\n";
}

void    Animal::makeSound() const{
    std::cout << "Animal sound!\n";
}

std::string Animal::getType() const{
    return this->type;
}

void    Animal::set_type(std::string new_type){
    this->type = new_type;
}