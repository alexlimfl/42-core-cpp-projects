/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 01:20:08 by folim             #+#    #+#             */
/*   Updated: 2024/04/30 15:04:52 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string  type);
        ~Weapon(void);
        const   std::string&  getType(void);
        void    setType(std::string type);
};

#endif
