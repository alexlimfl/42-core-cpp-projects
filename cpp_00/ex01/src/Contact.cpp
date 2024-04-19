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

// ◦ The contact fields are: first name, last name, nickname, phone number, and
//  darkest secret. A saved contact can’t have empty fields.

using namespace std;

int Contact::set_firstname(string str){
    if (str.empty())
        return (0);
    firstname = str;
    return (1);
}

int Contact::set_lastname(string str){
    if (str.empty())
        return (0);
    lastname = str;
    return (1);
}

int Contact::set_nickname(string str){
    if (str.empty())
        return (0);
    nickname = str;
    return (1);
}

int Contact::set_phonenumber(string str){
    if (str.empty())
        return (0);
    phonenumber = str;
    return (1);
}

int Contact::set_darkestsecret(string str){
    if (str.empty())
        return (0);
    darkestsecret = str;
    return (1);
}

void Contact::set_index(int nb){
    index = nb;
}

string Contact::get_input(string prompt){
    string  input = "";
    bool    valid = false;
    int     i = 0;
    do {
        cout << prompt << flush;
        getline(cin, input);
        // cout << "here" << input << "$" << endl;
        if (input.empty()){
            cin.clear();
            cout << "Invalid input, please retry!" << endl;
        }
        else
            valid = true;
        i++;
    } while(!valid);
    return (input);
}

void Contact::init(void){
    firstname = get_input("PLease enter your first name: ");
    lastname = get_input("Please enter your last name: ");
    nickname = get_input("Please enter your nickname: ");
    phonenumber = get_input("Please enter your phone number: ");
    darkestsecret = get_input("Please enter your darkest secret: ");
}
