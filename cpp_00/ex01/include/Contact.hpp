/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:15:06 by folim             #+#    #+#             */
/*   Updated: 2024/04/09 00:26:11 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

using namespace std;

class Contact{
    private:
        string	firstname, lastname, nickname, phonenumber, darkestsecret;
		int		index;

    public:
		int set_firstname(string str);
		int set_lastname(string str);
		int set_nickname(string str);
		int set_phonenumber(string str);
		int set_darkestsecret(string str);
		void	init(void);
		void	set_index(int nb);
		string	get_input(string prompt);
};

#endif