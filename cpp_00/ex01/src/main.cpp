/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:47:02 by folim             #+#    #+#             */
/*   Updated: 2024/04/09 00:17:13 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"



int main() {

    //get the user input
    PhoneBook master;

    master.welcome_prompt();
    do{
        std::string input = "";
        cin >> input;
        if (input == "ADD")
            master.add_contact();
        // else if (input == "SEARCH")
        //     //search contacts
        // else if (input == "EXIT")
        //     //exits
    }while(1);
    

    return 0;
}
