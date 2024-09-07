/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:34:07 by folim             #+#    #+#             */
/*   Updated: 2024/05/08 22:33:03 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int ac, char *av[]){

    if (ac != 2){
        std::cout << "Invalid input!" << std::endl;
        exit (1);
    }
    Harl harley;
    harley.complain(av[1]);
}
