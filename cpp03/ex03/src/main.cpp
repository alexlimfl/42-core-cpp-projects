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
    DiamondTrap diana("Diana");
    diana.attack("Maria");
    diana.takeDamage(5);
    diana.beRepaired(6);
    diana.takeDamage(5);
    diana.attack("Maria");
    diana.guardGate();
    diana.highFivesGuys();
    diana.whoAmI();

    // Orthodox Canonical Form Test
    std::cout << "\nOrthodox Canonical Form Test\n";
    DiamondTrap diana2(diana);
    DiamondTrap diana3("Diana3");
    diana3.attack("John");
    diana3.takeDamage(25);
    diana3.beRepaired(5);
    diana3.guardGate();
    diana3.highFivesGuys();
    diana3.whoAmI();
    diana2 = diana3;
    diana3.whoAmI();

    return 0;
}
