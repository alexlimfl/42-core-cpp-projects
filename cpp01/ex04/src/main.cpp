/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:58:41 by folim             #+#    #+#             */
/*   Updated: 2024/06/11 15:11:17 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sed.hpp"

int main(int ac, char *av[]){
    if (ac != 4){
        std::cerr << "Please check inputs!" << std::endl;
        std::cout << "Input format as following:\n  filename  s1  s2" << std::endl;
        return (1);
    }
    Sed sed(av[1]);
    sed.replace(av[2], av[3]);

    return (0);
}
