/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:22:11 by folim             #+#    #+#             */
/*   Updated: 2024/04/18 15:22:12 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

const int MAX_SIZE = 8;

class PhoneBook{
    private:
        Contact    contacts[MAX_SIZE];

    public:
        // void    init_empty_contact(void);
        void    add_contact(void);
        void    welcome_prompt(void);
        void    exit_phonebook(void);
        void    search_contact(void);
};

#endif
