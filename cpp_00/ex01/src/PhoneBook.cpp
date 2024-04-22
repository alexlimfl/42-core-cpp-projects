/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:22:25 by folim             #+#    #+#             */
/*   Updated: 2024/04/18 15:22:26 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

// void    PhoneBook::init_empty_contact(void){
//     for(int i = 0; i < MAX_SIZE; i++)
//         contacts[i].init_data();
// }

void    PhoneBook::welcome_prompt(void){
    std::cout << "   Welcome to PhoneBook" << std::endl;
    std::cout << "       These are the commands:" << std::endl;
    std::cout << "       ADD: save a new contact" << std::endl;
    std::cout << "       SEARCH: display a specific contact" << std::endl;
    std::cout << "       EXIT: quit program" << std::endl;
}

void    PhoneBook::exit_phonebook(void){
    std::cout << "   Thank you for your service!" << std::endl;
    exit(0);
}

void    PhoneBook::add_contact(void){
    static int i;

    contacts[i % MAX_SIZE].init();
    contacts[i % MAX_SIZE].set_index(i % MAX_SIZE);
    std::cout << "      Contact Is Saved on Index: " << i % MAX_SIZE << "!"<< std::endl;
    i++;
}

void    PhoneBook::search_contact(void){
    std::cout << "      ------------- PHONBOOK CONTACTS -------------" << std::endl;
    for(int i = 0; i < 4; i++)
        contacts[i].view();

    std::string input_index = "";
    std::cout << "      Enter Contact Index: ";
    std::getline(std::cin, input_index);
    if (input_index.empty() && std::cin.eof()) {
        std::cout << "-- End-of-file received! --" << std::endl;
        exit_phonebook();
    }
    std::istringstream   iss(input_index);
    int id_nb = 0;
    iss >> id_nb;

    bool isnumber; // if input is "abc", id_nb will be 0
    if (input_index != "0" && id_nb == 0)
        isnumber = false;
    else
        isnumber = true;
    
    if (isnumber && id_nb >= 0 && id_nb < MAX_SIZE){
        if(contacts[id_nb].get_firstname().empty())
            std::cout << "         Contact Empty!" << std::endl;
        else{
            std::cout << "         Contact Index: ";
            std::cout << id_nb << std::endl;
            contacts[id_nb].view_all();
        }
    }
    else
        std::cout << "         Invalid Index! (Valid: 0 - 7)" << std::endl;
}
