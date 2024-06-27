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
    {
        std::cout << "Test1: from module\n";
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;//should not create a leak
        delete i;
    }

    {
        std::cout << "\nTest2: copy constructor\n";
        Dog dog_one;
        dog_one.getMemAddress();
        std::cout << dog_one.getType() << "\n";
        dog_one.set_type("dog one");
        std::cout << dog_one.getType() << "\n";
        Dog dog_two(dog_one);
        dog_two.getMemAddress();
        std::cout << dog_two.getType() << "\n";
    }

    {
        std::cout << "\nTest3: copy assignment operator\n";
        Cat cat_one;
        cat_one.getMemAddress();
        std::cout << cat_one.getType() << "\n";
        cat_one.set_type("cat one");
        std::cout << cat_one.getType() << "\n";
        Cat cat_two;
        cat_two.getMemAddress();
        cat_two = cat_one;
        cat_two.getMemAddress();
        std::cout << cat_two.getType() << "\n";
    }

    return 0;
}
