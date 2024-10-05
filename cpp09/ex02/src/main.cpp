/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:12:01 by folim             #+#    #+#             */
/*   Updated: 2024/10/04 14:12:02 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2 ){
        std::cout << "Error: No argument provided!\n";
        return 1;
    }

    PmergeMe one(av + 1);

    // std::cout << "\n\nTest Copy Constructor and Copy Assignment Operator:\n";
    // PmergeMe two(one);
    // two.Run();
    // PmergeMe three(NULL);
    // three.Run();
    // three = two;
    // three.Run();
    return 0;
}
