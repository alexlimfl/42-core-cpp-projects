/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(): Animal() {
    this->type = "Cat";
    std::cout << "Constructor [Cat]\n";
}

Cat::Cat(const Cat &src): Animal() {
    std::cout << "Copy Constructor [Cat]\n";
    *this = src;
}

Cat &Cat::operator= (const Cat &src){
    std::cout << "Copy Assignment Operator [Cat]\n";
    if (this != &src){
        this->type = src.type;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Destructor [Cat]\n";
}

void    Cat::makeSound() const {
    std::cout << "Meow!\n";
}