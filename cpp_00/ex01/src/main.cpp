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

    // master.init_empty_contact();
    master.welcome_prompt();
    do{
        std::string input = "";
        std::cout << "   Please enter a command: ";
        getline(std::cin, input);
        if (input.empty() && std::cin.eof()) {
            std::cout << "-- End-of-file received! --" << std::endl;
            master.exit_phonebook();
        }
        if (input == "ADD")
            master.add_contact();
        else if (input == "SEARCH")
            master.search_contact();
        else if (input == "EXIT")
            master.exit_phonebook();
        else
            std::cout << "      Invalid Command!" << std::endl;
    }while(1);
    std::cout << "   Thank you for your service!" << std::endl;
    return 0;
}
