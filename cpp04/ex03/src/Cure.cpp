/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:33 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:53:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << "Constructor [Cure, " << this->type << "]\n";
}

Cure::~Cure(){
    std::cout << "Destructor [Cure, " << this->type << "]\n";
}

Cure::Cure(const Cure &src ) : AMateria("cure"){
    *this = src;
    std::cout << "Copy Constructor [Cure, " << this->type << "]\n";
}

Cure & Cure::operator= (const Cure &src){
    if (this != &src)
        type = src.type;
    std::cout << "Copy Assignment Operator [Cure, " << this->type << "]\n";
    return *this;
}

std::string const & Cure::getType() const{
    return (this->type);
}

Cure *Cure::clone() const{
	Cure	*new_instance = new Cure();
	return (new_instance);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals "<< target.getName() << "'s wounds *\n";
}