/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:47:22 by folim             #+#    #+#             */
/*   Updated: 2024/10/02 15:47:23 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Error: Invalid input, only one argument required!\n";
        return 1;
    }
    RPN one(av[1]);

    // std::cout << "Test Copy Constructor and Copy Assignment Operator:\n";
    // RPN two(one);
    // two.Run();
    // RPN three("");
    // three = two;
    // three.Run();
    return 0;
}