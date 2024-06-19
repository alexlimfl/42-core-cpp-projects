/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:11:27 by folim             #+#    #+#             */
/*   Updated: 2024/06/08 04:11:28 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

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
    }

    return 0;
}
