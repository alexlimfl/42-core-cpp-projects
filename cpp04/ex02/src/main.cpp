/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 00:59:35 by folim             #+#    #+#             */
/*   Updated: 2024/06/25 00:59:39 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"



int main()
{
    // {
    //     // this block will fail the compilation
    //     std::cout << "\nTest1: Abstract class type object \n";
    //     Animal a;
    //     a.makeSound();
    // }

    {
        std::cout << "\nTest2: Abstract class type pointer\n";
        Animal* a;
        a = new Dog();
        a->makeSound();
        delete a;
    }

    return 0;
}
