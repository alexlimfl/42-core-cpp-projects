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
#include <cstdlib>

void    PhoneBook::welcome_prompt(void){
    cout << "   Welcome to PhoneBook" << endl;
    cout << "       These are the commands:" << endl;
    cout << "       ADD: save a new contact" << endl;
    cout << "       SEARCH: display a specific contact" << endl;
    cout << "       EXIT: quit program" << endl;
}

void    PhoneBook::exit_phonebook(void){
    cout << "   Thank you for your service!" << endl;
    exit(0);
}

void    PhoneBook::add_contact(void){
    static int i;
    int max = 3;

    contacts[i % max].init();
    contacts[i % max].set_index(i % max);
    cout << "      Contact Is Saved at No. " << i % max << " !"<< endl;
    i++;
}

void    PhoneBook::search_contact(void){
    int index = 0;

    contacts[0].view();

    // cout << "      Enter Contact Index: ";
    // getline(cin, index);

}
