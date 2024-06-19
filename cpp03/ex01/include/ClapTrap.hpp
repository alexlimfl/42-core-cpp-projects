/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:13:18 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 13:38:44 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
    #define __CLAPTRAP_H__

#include <iostream>

class ClapTrap{
    protected:
        std::string     _name;
        int             _hitPoints;
        int             _energy;
        int             _attackDamage;
    
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator= (const ClapTrap &src);
        ~ClapTrap();
};

#endif