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

    contacts[i % MAX_SIZE].init();
    contacts[i % MAX_SIZE].set_index(i % MAX_SIZE);
    cout << "      Contact Is Saved at No." << i % MAX_SIZE << "!"<< endl;
    i++;
}

void    PhoneBook::search_contact(void){

    cout << "      ------------- PHONBOOK CONTACTS -------------" << endl;
    for(int i = 0; i < 4; i++)
        contacts[i].view();

    // cout << "      Enter Contact Index: ";
    // getline(cin, index);

}
