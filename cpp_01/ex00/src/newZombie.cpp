/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:18:42 by folim             #+#    #+#             */
/*   Updated: 2024/04/26 23:18:44 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/*
    It creates a zombie, name it, and return it
    so you can use it outside of the function scope.
*/
Zombie* newZombie(std::string name){
    return (new Zombie(name));
}
