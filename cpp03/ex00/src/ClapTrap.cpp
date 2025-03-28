/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:13:34 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 15:02:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name){
    _hitPoints = 10;
    _energy = 10;
    _attackDamage = 0;
    this->_name = _name;
    std::cout << "ClapTrap " << this->_name << " is constructed!\n";
}

ClapTrap::ClapTrap(const ClapTrap &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->_name << " is destructed!\n";
}

void    ClapTrap::attack(const std::string& target){
    if (_energy <= 0){
        std::cout << "ClapTrap " << _name << " has no energy points left!\n";
        return;
    }
    _energy -= 1;
    std::cout   << "ClapTrap " << _name << " attacks " << target
                << " causing " << _attackDamage << " points of damage! "
                << "Current energy point is " << _energy << "!\n";
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is already dead!\n";
        return;
    }
    _hitPoints -= amount;
    if (_hitPoints < 0){
        _hitPoints = 0;
    }
    std::cout   << "ClapTrap " << _name << " is taking damage of " << amount
                << " points and left " << _hitPoints << " HP!\n";
    if (_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead!\n";
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead!\n";
        return;
    }
    if (_energy <= 0){
        std::cout << "ClapTrap " << _name << " has no energy points left!\n";
        return;
    }
    _hitPoints += amount;
    _energy -= 1;
    std::cout   << "ClapTrap " << _name << " is receiving repair of " << amount
                << " points and left " << _hitPoints << " HP! "
                << "Current energy point is " << _energy << "!\n";
}
