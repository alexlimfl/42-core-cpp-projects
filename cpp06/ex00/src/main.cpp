/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:24:41 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:24:43 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Please make sure argument is valid!\n";
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}
