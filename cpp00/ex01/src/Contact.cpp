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
#include "../include/PhoneBook.hpp"

// ◦ The contact fields are: first name, last name, nickname, phone number, and
//  darkest secret. A saved contact can’t have empty fields.

void Contact::set_index(int nb){
    index = nb;
}

std::string Contact::get_firstname(void){
    return firstname;
}

std::string Contact::get_input(std::string prompt){
    std::string  input;
    bool    valid = false;
    int i = 0;

    do {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty() && std::cin.eof()) {
            eof_received();
        }
        if (input.empty())
                std::cout << "         Invalid input, please retry!" << std::endl;
        else
            valid = true;
        i++;
    } while(!valid);
    return (input);
}

void Contact::init(void){
    firstname = get_input("      PLease enter your first name: ");
    lastname = get_input("      Please enter your last name: ");
    nickname = get_input("      Please enter your nickname: ");
    phonenumber = get_input("      Please enter your phone number: ");
    darkestsecret = get_input("      Please enter your darkest secret: ");
}

void Contact::print_align(std::string input){
    if (input.length() > 10){
        std::cout << input.substr(0, 9) + ".";
        return ;
    }
    int fill = 10;
    for (int spacing = 10 - input.length(); spacing > 0 ; spacing--)
        std::cout << " ";
    if (input.length() < 10)
        fill = 10 - (10 - input.length()); // 10 - spacing
    for (int i = 0; i < fill && input[i]; i++)
        std::cout << input[i];
}

void Contact::view(void){
    std::stringstream id("");

    if(firstname.empty())
        return ;
    id << index;
    std::cout << "      |";
    print_align(id.str());
    std::cout << "|";
    print_align(firstname);
    std::cout << "|";
    print_align(lastname);
    std::cout << "|";
    print_align(nickname);
    std::cout << "|" << std::endl;
}

void Contact::view_all(void){
    std::cout << "            Firstname: " << firstname << std::endl;
    std::cout << "            Lastname: " << lastname << std::endl;
    std::cout << "            Nickname: " << nickname << std::endl;
    std::cout << "            Phone Number: " << phonenumber << std::endl;
//     std::cout << "            Darkest Secret: " << darkestsecret << std::endl;
}

void Contact::eof_received(void){
    std::cout << "-- End-of-file received! --" << std::endl;
    std::cout << "   Thank you for your service!" << std::endl;
    exit(0);
}

// void Contact::init_data(void){
//     firstname = "";
//     lastname = "";
//     nickname = "";
//     phonenumber = "";
//     darkestsecret = "";
// }
