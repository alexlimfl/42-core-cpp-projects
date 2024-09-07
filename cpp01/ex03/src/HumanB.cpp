/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:19:02 by folim             #+#    #+#             */
/*   Updated: 2024/05/01 22:38:46 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _fists(Weapon("fists")){
    _weapon = &_fists;
    _name = name;
    std::cout << "HumanB: " << name << " is created!" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "HumanB: " << _name << " is destroyed!" << std::endl;
}

void    HumanB::attack(){
    std::cout << _name << " attacks with their " << _weapon->getType() << "!" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    _weapon = &weapon;
    std::cout << "HumanB: " << _name << " is equiped with weapon: ";
    std::cout << _weapon->getType() << "!" << std::endl;
}
