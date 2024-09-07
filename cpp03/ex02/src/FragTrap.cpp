/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:06:05 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 17:33:36 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->_hitPoints = 100;
    this->_energy = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " is constructed!\n";
}

// Note: Always initialize base class member attributes.

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


FragTrap &FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->_name << " is destructed!\n";
}

void FragTrap::attack(const std::string& target){
    if (_energy <= 0){
        std::cout << "FragTrap " << _name << " has no energy points left!\n";
        return;
    }
    _energy -= 1;
    std::cout   << "FragTrap " << _name << " attacks " << target
                << " causing " << _attackDamage << " points of damage! "
                << "Current energy point is " << _energy << "!\n";
}

void FragTrap::highFivesGuys(){
    std::cout   << "FragTrap " << _name << " is now requesting a positive high five!\n";
}