/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:11:27 by folim             #+#    #+#             */
/*   Updated: 2024/06/18 14:59:36 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main(){

    ClapTrap    alex("Alex");
    alex.attack("Josh");
    alex.takeDamage(5);
    alex.beRepaired(6);
    alex.takeDamage(6);
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    alex.attack("Josh");
    // alex.attack("Josh");
    // alex.beRepaired(6);
    
    std::cout << "///////////////////////\n";
    
    ScavTrap    abby("Abby");
    abby.attack("John");
    abby.takeDamage(5);
    abby.beRepaired(6);
    abby.takeDamage(5);
    abby.attack("John");
    abby.guardGate();
    
    std::cout << "///////////////////////\n";
    
    FragTrap    beary("Beary");
    beary.attack("Shu");
    beary.takeDamage(5);
    beary.beRepaired(6);
    beary.takeDamage(5);
    beary.attack("Shu");
    beary.highFivesGuys();

    std::cout << "///////////////////////\n";
    DiamondTrap diana("Diana");
    diana.attack("Maria");
    diana.takeDamage(5);
    diana.beRepaired(6);
    diana.takeDamage(5);
    diana.attack("Maria");
    diana.guardGate();
    diana.highFivesGuys();
    diana.whoAmI();


    return 0;
}
