/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:11:27 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 14:58:09 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(){

    {
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

        std::cout << "\n\n";

        ScavTrap    abby("Abby");
        abby.attack("John");
        abby.takeDamage(5);
        abby.beRepaired(6);
        abby.takeDamage(5);
        abby.attack("John");
        abby.guardGate();
    }

    // Orthodox Canonical Form Test
    {
        std::cout << "\nOrthodox Canonical Form Test\n";
        ClapTrap    alex("Alex");
        ClapTrap    bean(alex);
        ClapTrap    cindy("Cindy");

        cindy = bean;
        alex.attack("Josh");
        bean.attack("Josh");
        cindy.attack("Josh");

        ScavTrap    abdul("Abdul");
        std::cout << "breakpoint\n";
        ScavTrap    barney(abdul);
        ScavTrap    chris("Chris");

        chris = barney;
        abdul.attack("Josh");
        barney.attack("Josh");
        chris.attack("Josh");
        abdul.guardGate();
        barney.guardGate();
        chris.guardGate();
    }    

    return 0;
}
