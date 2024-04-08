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

int main() {
    // Creating a Contact object
    Contact myContact("John", "Doe", "JD", "123", "gay");

    // Printing the details of the contact
    printall(myContact);

    return 0;
}
