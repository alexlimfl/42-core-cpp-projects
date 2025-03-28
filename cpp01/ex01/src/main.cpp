/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:17:12 by folim             #+#    #+#             */
/*   Updated: 2024/04/26 23:17:13 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#define N 3

int main(){

    Zombie *z = zombieHord(N, "John");
    for (size_t i = 0; i < N; i++){
        z[i].announce();
    }
    delete[] z;
    return (0);
}
