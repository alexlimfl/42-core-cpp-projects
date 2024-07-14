/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:13:12 by folim             #+#    #+#             */
/*   Updated: 2024/07/12 18:13:13 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <iostream>

int main(){

    {
        Bureaucrat john("John", 1);
        john.incrementGrade();
    }

    std::cout << "help!\n";
    return 0;
}
