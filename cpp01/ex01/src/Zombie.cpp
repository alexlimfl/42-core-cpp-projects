/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:18:20 by folim             #+#    #+#             */
/*   Updated: 2024/04/26 23:18:22 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name;
}

Zombie::Zombie(){
    std::cout << "Zombie object " << name << " created!" << std::endl;   
}

Zombie::~Zombie(){
    std::cout << "Zombie object " << name << " deleted!" << std::endl;   
}
