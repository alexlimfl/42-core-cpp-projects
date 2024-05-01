/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:19:33 by folim             #+#    #+#             */
/*   Updated: 2024/05/01 22:30:20 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

const   std::string&  Weapon::getType(void){
    return (_type);
}

void    Weapon::setType(std::string type){
    std::cout << "Weapon type switched from " << _type << " to ";
    std::cout << type << "!" << std::endl;
    _type = type;
}

Weapon::Weapon(std::string type){
    _type = type;
}

Weapon::~Weapon(void){
    
}