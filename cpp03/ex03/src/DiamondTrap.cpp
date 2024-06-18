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
    DiamondTrap::name = name;
    ClapTrap::_hitPoints = FragTrap::_hitPoints;
    ClapTrap::_energy = ScavTrap::_energy;
    ClapTrap::_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << DiamondTrap::name << " is constructed!\n";
    std::cout << "HP " << this->_hitPoints << " is constructed!\n";
    std::cout << "Energy " << this->_energy << " is constructed!\n";
    std::cout << "AttackDamage " << this->_attackDamage << " is constructed!\n";
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << DiamondTrap::name << " is destructed!\n";
}

void    DiamondTrap::whoAmI(){
    std::cout << "I'm " << this->name << " !\n";
    std::cout << "Also known as " << this->_name << " !\n";
}