/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:26:51 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 14:09:17 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_hitPoints = 100;
    ClapTrap::_energy = 50;
    ScavTrap::_energy = ClapTrap::_energy;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " is constructed!\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " is destructed!\n";
}

void ScavTrap::attack(const std::string& target){
    if (ClapTrap::_energy <= 0){
        std::cout << "ScavTrap " << _name << " has no energy points left!\n";
        return;
    }
    ClapTrap::_energy -= 1;
    std::cout   << "ScavTrap " << _name << " attacks " << target
                << " causing " << _attackDamage << " points of damage! "
                << "Current energy point is " << ClapTrap::_energy << "!\n";
}

void ScavTrap::guardGate(){
    std::cout   << "ScavTrap " << _name << " is now in Gate keeper mode!\n";
}
