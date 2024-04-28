/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:17:46 by folim             #+#    #+#             */
/*   Updated: 2024/04/26 23:17:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        void announce(void);
        Zombie(std::string name);
        ~Zombie(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
