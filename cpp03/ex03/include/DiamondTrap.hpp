/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:24:03 by folim             #+#    #+#             */
/*   Updated: 2024/06/18 15:33:40 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
    #define __DIAMONDTRAP_H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap &operator= (const DiamondTrap &src);
        ~DiamondTrap();
        using           ScavTrap::attack;
        void            whoAmI();
};

#endif