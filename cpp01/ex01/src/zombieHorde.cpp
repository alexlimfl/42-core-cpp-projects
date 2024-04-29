/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:23:20 by folim             #+#    #+#             */
/*   Updated: 2024/04/29 02:23:21 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHord( int N, std::string name){
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++){
        z[i].setName(name);
    }
    return (z);
}
