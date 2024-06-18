/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:06:13 by folim             #+#    #+#             */
/*   Updated: 2024/06/18 15:22:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
    #define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    protected:
        int     _hitPoints;
        int     _attackDamage;
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    attack(const std::string& target);
        void    highFivesGuys();
};

#endif