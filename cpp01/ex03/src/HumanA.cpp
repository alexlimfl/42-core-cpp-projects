/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:18:50 by folim             #+#    #+#             */
/*   Updated: 2024/05/01 21:49:28 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
    _name = name;
    std::cout << "HumanA: " << name << " is created and equiped with weapon: ";
    std::cout << _weapon.getType() << "!" << std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA: " << _name << " destroyed!" << std::endl;
}

void    HumanA::attack(){
    std::cout << _name << " attacks with their " << _weapon.getType() << "!" << std::endl;
}
