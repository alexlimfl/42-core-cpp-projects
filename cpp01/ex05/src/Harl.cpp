/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:34:21 by folim             #+#    #+#             */
/*   Updated: 2024/06/11 15:44:50 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void Harl::debug( void ){
    std::cout   << "[DEBUG]\n"
                << "I love having extra bacon for my 7XL-double-cheese-triple-"
                << "pickle-specialketchup burger. I really do!"
                << std::endl;
}

void Harl::info( void ){
    std::cout   << "[INFO]\n"
                << "I cannot believe adding extra bacon costs more money. You didn't put"
                << "enough bacon in my burger! If you did, I wouldn't be asking for more!"
                << std::endl;
}

void Harl::warning( void ){
    std::cout   << "[WARNING]\n"
                << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                << "years whereas you started working here since last month."
                << std::endl;
}

void Harl::error( void ){
    std::cout   << "[ERROR]\n"
                << "This is unacceptable! I want to speak to the manager now."
                << std::endl;
}


void Harl::complain(std::string input){
    // Array of Pointers to Member Functions:
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const char* levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++){
        if (input == levels[i])
            return ((this->*ptr[i])());
    }
    std::cout << "Invalid input!" << std::endl;
}
