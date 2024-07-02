/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:12 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:53:16 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << "Constructor [Ice, " << this->type << "]\n";
}

Ice::~Ice(){
    std::cout << "Destructor [Ice, " << this->type << "]\n";
}

Ice::Ice(const Ice &src) : AMateria("ice"){
    *this = src;
    std::cout << "Copy Constructor [Ice, " << this->type << "]\n";
}

Ice & Ice::operator= (const Ice &src){
    if (this != &src)
        type = src.type;
    std::cout << "Copy Assignment Operator [Ice, " << this->type << "]\n";
    return *this;
}

std::string const & Ice::getType() const{
    return (this->type);
}

Ice *Ice::clone() const{
	Ice	*new_instance = new Ice();
	return (new_instance);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";
}
