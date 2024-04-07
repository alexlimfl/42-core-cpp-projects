/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 21:31:02 by folim             #+#    #+#             */
/*   Updated: 2024/04/07 23:00:11 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

void siren()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

std::string toUpperCase(std::string str)
{
	std::string result = str;
	for(int i = 0; result[i]; i++)
		result[i] = toupper(result[i]);
	// std::transform(result.begin(), result.end(), result.begin(), [](unsigned char c){return std::toupper(c);});
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 1)
		siren();
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << toUpperCase(av[i]);
	}
	std::cout << std::endl;
	return (0);
}
