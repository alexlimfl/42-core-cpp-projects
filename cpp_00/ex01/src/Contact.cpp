/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 00:06:03 by folim             #+#    #+#             */
/*   Updated: 2024/04/09 00:25:04 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

void    printall(Contact& myContact){
    std::cout << "First Name: " << myContact.firstname << std::endl;
    std::cout << "Last Name: " << myContact.lastname << std::endl;
    std::cout << "Nickname: " << myContact.nickname << std::endl;
    std::cout << "Phone Number: " << myContact.nickname << std::endl;
    std::cout << "Darkest Secret: " << myContact.nickname << std::endl;
}
