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
    this->_energy = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " is constructed!\n";
}

// Note: Always initialize base class member attributes.

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src){
		this->_hitPoints = src._hitPoints;
        this->_energy = src._energy;
        this->_attackDamage = src._attackDamage;
        this->_name = src._name;
    }
	return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->_name << " is destructed!\n";
}

void ScavTrap::attack(const std::string& target){
    if (_energy <= 0){
        std::cout << "ScavTrap " << _name << " has no energy points left!\n";
        return;
    }
    _energy -= 1;
    std::cout   << "ScavTrap " << _name << " attacks " << target
                << " causing " << _attackDamage << " points of damage! "
                << "Current energy point is " << _energy << "!\n";
}

void ScavTrap::guardGate(){
    std::cout   << "ScavTrap " << _name << " is now in Gate keeper mode!\n";
}
