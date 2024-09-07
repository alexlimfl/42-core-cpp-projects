/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:23:32 by folim             #+#    #+#             */
/*   Updated: 2024/06/18 16:00:01 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"),
                                            ScavTrap(name), FragTrap(name){
    this->name = name;
    ScavTrap ScavTrap_temp("    ScavTrap_temp");
    FragTrap FragTrap_temp("    FragTrap_temp");

    this->_hitPoints    = FragTrap_temp.getHP();
    this->_energy       = ScavTrap_temp.getEnergy();
    this->_attackDamage = FragTrap_temp.getAttackDamage();

    std::cout << "DiamondTrap " << this->name << " is constructed!\n";
    std::cout << "  HP: " << this->_hitPoints << "\n";
    std::cout << "  Energy: " << this->_energy << "\n";
    std::cout << "  AttackDamage: " << this->_attackDamage << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) :  ClapTrap(src.name + "_clap_name"),
                                                    ScavTrap(src.name), FragTrap(src.name){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
    std::string temp = this->name;
	if (this != &src){
		this->_hitPoints = src._hitPoints;
        this->_energy = src._energy;
        this->_attackDamage = src._attackDamage;
        this->_name = src._name;
        this->name = src.name;
    }

    std::cout << "DiamondTrap " << this->name << " is copied to " << temp << "!\n";
    std::cout << "  HP: " << this->_hitPoints << "\n";
    std::cout << "  Energy: " << this->_energy << "\n";
    std::cout << "  AttackDamage: " << this->_attackDamage << "\n";
	return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << DiamondTrap::name << " is destructed!\n";
}

void    DiamondTrap::whoAmI(){
    std::cout << "I'm " << this->name << " !\n";
    std::cout << "Also known as " << this->_name << " !\n";
}
