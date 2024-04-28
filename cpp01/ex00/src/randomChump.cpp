/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:19:01 by folim             #+#    #+#             */
/*   Updated: 2024/04/26 23:19:03 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
    This function creates a Zombie object with the given name
    and makes the zombie announce itself.
*/
void randomChump(std::string name){
    Zombie z = Zombie(name);
    z.announce();
}
