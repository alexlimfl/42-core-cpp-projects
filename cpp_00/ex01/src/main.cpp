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
        cout << "   Please enter a command: ";
        getline(cin, input);
        if (input == "ADD")
            master.add_contact();
        else if (input == "SEARCH")
            master.search_contact();
        else if (input == "EXIT")
            master.exit_phonebook();
        else
            cout << "      Invalid Command!" << endl;
    }while(1);
    return 0;
}
