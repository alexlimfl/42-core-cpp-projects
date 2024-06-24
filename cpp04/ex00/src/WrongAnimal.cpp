/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Constructor [WrongAnimal]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
    std::cout << "Copy Constructor [WrongAnimal]\n";
    *this = src;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &src){
    std::cout << "Copy Assignment Operator [WrongAnimal]\n";
    if (this != &src){
        this->type = src.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor [WrongAnimal]\n";
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongCat sound!\n";
}

std::string WrongAnimal::getType() const{
    return this->type;
}