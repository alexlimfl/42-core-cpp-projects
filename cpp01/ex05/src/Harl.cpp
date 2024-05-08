/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:34:21 by folim             #+#    #+#             */
/*   Updated: 2024/05/08 22:10:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void Harl::debug( void ){
    std::cout   << "I love having extra bacon for my 7XL-double-cheese-triple-"
                << "pickle-specialketchup burger. I really do!"
                << std::endl;
}

void Harl::info( void ){
    std::cout   << "I cannot believe adding extra bacon costs more money. You didn't put"
                << "enough bacon in my burger! If you did, I wouldn't be asking for more!"
                << std::endl;
}

void Harl::warning( void ){
    std::cout   << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                << "years whereas you started working here since last month."
                << std::endl;
}

void Harl::error( void ){
    std::cout   << "This is unacceptable! I want to speak to the manager now."
                << std::endl;
}

int Harl::check(std::string &input){
    const char* levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (input == levels[i])
            return (i);
    }
    std::cout << "Invalid input!" << std::endl;
    return (-1);
}


void Harl::complain(std::string level){
    switch (check(level))
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            break;
    }
}
