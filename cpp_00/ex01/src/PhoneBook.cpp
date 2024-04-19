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

// void    PhoneBook::add_contact(void){
//     static int  i;
//     contacts[i % 8].init();
//     contacts[i % 8].set_index(i % 8);
//     i++;
// }

void    PhoneBook::welcome_prompt(void){
    cout << "   Welcome to PhoneBook" << endl;
    cout << "       These are the commands:" << endl;
    cout << "       ADD: save a new contact" << endl;
    cout << "       SEARCH: display a specific contact" << endl;
    cout << "       EXIT: quit program" << endl;
    cout << "   Please enter a command: ";
}

void    PhoneBook::add_contact(void){
    contacts[0].init();

}