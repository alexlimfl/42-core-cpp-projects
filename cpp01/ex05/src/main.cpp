/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:34:07 by folim             #+#    #+#             */
/*   Updated: 2024/05/08 21:15:33 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(){

    Harl harley;

    std::cout   << "Please enter one of the following:" 
                << "\n  \"DEBUG\"\n"
                << "  \"INFO\"\n"
                << "  \"WARNING\"\n"
                << "  \"ERROR\""
                << std::endl;
    std::string input;
    std::cout << "> ";
    getline(std::cin, input);
    harley.complain(input);
}
