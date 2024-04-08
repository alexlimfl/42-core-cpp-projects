/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:15:06 by folim             #+#    #+#             */
/*   Updated: 2024/04/08 19:40:14 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
	
	public:
		Contact(const std::string& first, const std::string& last,
				const std::string& nick, const std::string& phone,
				const std::string& secret)
					: firstname(first)
}



#endif
