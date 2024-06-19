/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:06:13 by folim             #+#    #+#             */
/*   Updated: 2024/06/12 17:32:33 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
    #define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        FragTrap &operator= (const FragTrap &src);
        ~FragTrap();
        void    attack(const std::string& target);
        void    highFivesGuys();
};

#endif