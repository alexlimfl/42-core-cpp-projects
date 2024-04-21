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
#include <cctype>
#include <string>
#include <iostream>
#include <limits>

// ◦ The contact fields are: first name, last name, nickname, phone number, and
//  darkest secret. A saved contact can’t have empty fields.

using namespace std;

void Contact::set_index(int nb){
    index = nb;
}

string Contact::get_input(string prompt){
    string  input;
    bool    valid = false;
    int i = 0;

    do {
        // if (i > 0)
            cout << prompt;
        getline(cin, input);
        if (input.empty()){
            // if (i > 0)
                cout << "         Invalid input, please retry!" << endl;
        }
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

void Contact::print_align(string input){
    if (input.length() > 10){
        cout << input.substr(0, 9) + ".";
        return ;
    }
    int fill = 10;
    for (int spacing = 10 - input.length(); spacing > 0 ; spacing--)
        cout << "s";
    if (input.length() < 10)
        fill = 10 - (10 - input.length()); // 10 - spacing
    for (int i = 0; i < fill && input[i]; i++)
        cout << input[i];
}

void Contact::view(void){

    if(firstname.empty())
        return ;
    cout << "      |";
    // print_align(std::wstring(index));
    // cout << "|";
    print_align(firstname);
    cout << "|";
    print_align(lastname);
    cout << "|";
    print_align(nickname);
    cout << "|" << endl;
}
