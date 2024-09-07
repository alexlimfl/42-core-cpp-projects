/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(): Animal() {
    std::cout << "Constructor [Dog]\n";
    this->type = "Dog";
    try{
        this->_brain = new Brain();
    } catch (const  std::bad_alloc &e){
        std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
        this->_brain = NULL;
    }

}

Dog::Dog(const Dog &src): Animal() {
    std::cout << "Copy Constructor [Dog]\n";
    // *this = src;
    this->type = src.type;
    try{
        this->_brain = new Brain(*src._brain);
        // this->_brain = src._brain;
    } catch (const  std::bad_alloc &e){
        std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
        this->_brain = NULL;
    }
}

Dog &Dog::operator= (const Dog &src){
    std::cout << "Copy Assignment Operator [Dog]\n";
    if (this != &src){
        delete this->_brain;
        this->type = src.type;
        try{
            this->_brain = new Brain(*src._brain);
        } catch (const  std::bad_alloc &e){
            std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
            this->_brain = NULL;
        }
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Destructor [Dog]\n";
    delete this->_brain;
}

void    Dog::makeSound() const{
    std::cout << "Woof!\n";
}

void    Dog::getMemAddress(){
    std::cout << this->_brain << "\n";
}