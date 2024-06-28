/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
    this->type = "WrongCat";
    std::cout << "Constructor [WrongCat]\n";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal() {
    std::cout << "Copy Constructor [WrongCat]\n";
    *this = src;
}

WrongCat &WrongCat::operator= (const WrongCat &src){
    std::cout << "Copy Assignment Operator [WrongCat]\n";
    if (this != &src){
        this->type = src.type;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "Destructor [WrongCat]\n";
}

// void    WrongCat::makeSound() const{
//     std::cout << "WrongCat sound!\n";
// }