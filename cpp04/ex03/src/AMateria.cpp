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
    std::cout << "Contructor [AMaterial]\n";
}

AMateria::~AMateria(){
    std::cout << "Destructor [AMateria]\n";
}

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << "AMaterial used on " << target.getName() << "\n";
}

