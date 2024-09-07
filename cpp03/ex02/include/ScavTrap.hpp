/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:27:01 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 17:32:31 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
    #define __SCAVTRAP_H__
    
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        ScavTrap &operator= (const ScavTrap &src);
        ~ScavTrap();
        void    attack(const std::string& target);
        void    guardGate();
};

#endif
