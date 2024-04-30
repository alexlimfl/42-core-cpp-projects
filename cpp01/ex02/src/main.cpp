/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:09:39 by folim             #+#    #+#             */
/*   Updated: 2024/04/30 00:09:41 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "--- Mem. address held by: ---\n" << std::endl;
    std::cout << "string variable: " << &str << std::endl;
    std::cout << "stringPTR: " << &stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl << std::endl;
    
    std::cout << "--- Value pointed to by: ---\n" << std::endl;
    std::cout << "string variable: " << str << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

    /*
        &stringREF is a reference of str.
        it has the same value and memory address of str.
    */

    return (0);
}