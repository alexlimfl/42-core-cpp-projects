/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:17:12 by folim             #+#    #+#             */
/*   Updated: 2024/06/11 13:53:46 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(){
    Zombie  *z = newZombie("Foo");
    
    z->announce();
    randomChump("John");
    delete z;
    return (0);
}