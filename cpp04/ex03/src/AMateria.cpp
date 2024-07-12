/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:00 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:53:02 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type){
    this->type = type;
    this->owner = "";
    std::cout << "Contructor [AMaterial, " << this->type << "]\n";
}

AMateria::~AMateria(){
    std::cout << "Destructor [AMaterial, " << this->type << "]\n";
}

AMateria::AMateria(const AMateria &src){
    *this = src;
    std::cout << "Copy Constructor [AMaterial, " << this->type << "]\n";
}

AMateria & AMateria::operator= (const AMateria &src){
    if (this != &src)
        type = src.type;
    std::cout << "Copy Assignment Operator [AMaterial, " << this->type << "]\n";
    return *this;
}

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << "AMaterial used on " << target.getName() << "\n";
}

std::string AMateria::getOwner(){
    return (this->owner);
}

void AMateria::setOwner(std::string newOwner){
    this->owner = newOwner;
}
