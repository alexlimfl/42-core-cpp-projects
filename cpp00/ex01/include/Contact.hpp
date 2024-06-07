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

#include <cstdlib>
#include <sstream>
#include <cctype>
#include <string>
#include <iostream>
#include <limits>

class Contact{
    private:
		std::string 	firstname, lastname, nickname, phonenumber, darkestsecret;
		int				index;

    public:
		void			init(void);
		void			set_index(int nb);
		std::string		get_input(std::string prompt);
		void			view(void);
		void			print_align(std::string input);
		std::string		get_firstname(void);
		void			view_all(void);
		void			init_data(void);
		void			eof_received(void);
};

#endif