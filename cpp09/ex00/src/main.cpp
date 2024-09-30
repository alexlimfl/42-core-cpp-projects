/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:19:41 by folim             #+#    #+#             */
/*   Updated: 2024/09/27 21:19:42 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Error: only accepts one file.\n";
        return 1;
    }

    BitcoinExchange one(av[1], "data.csv");
    one.convertInput();

    // /*Test Copy Constructor and Copy Assignment Operator:*/
    // BitcoinExchange two = one;
    // two.convertInput();

    // BitcoinExchange three("doesntexit.txt", "data.csv");
    // three.convertInput();
    // three = two;
    // three.convertInput();
    
    return 0;
}
