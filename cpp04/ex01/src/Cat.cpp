/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:32:09 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:32:10 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(): Animal() {
    std::cout << "Constructor [Cat]\n";
    this->type = "Cat";
    try{
        this->_brain = new Brain();
    } catch (const  std::bad_alloc &e){
        std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
        this->_brain = NULL;
    }
}

Cat::Cat(const Cat &src): Animal() {
    std::cout << "Copy Constructor [Cat]\n";
    // *this = src;
    this->type = src.type;
    try{
        this->_brain = new Brain(*src._brain);
    } catch (const  std::bad_alloc &e){
        std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
        this->_brain = NULL;
    }
}

Cat &Cat::operator= (const Cat &src){
    std::cout << "Copy Assignment Operator [Cat]\n";
    if (this != &src){
        delete this->_brain;
        this->type = src.type;
        try{
            this->_brain = new Brain(*src._brain);
            // this->_brain = src._brain;
        } catch (const  std::bad_alloc &e){
            std::cerr << "Memory Allocation Failed: " << e.what() << "\n";
            this->_brain = NULL;
        }
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Destructor [Cat]\n";
    delete this->_brain;
}

void    Cat::makeSound() const {
    std::cout << "Meow!\n";
}

void    Cat::getMemAddress(){
    std::cout << this->_brain << "\n";
}