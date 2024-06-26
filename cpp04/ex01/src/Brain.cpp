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

#include "../include/Brain.hpp"

Brain::Brain(){
    std::cout << "Constructor [Brain]\n";
}

Brain::Brain(const Brain &src){
    std::cout << "Copy Constructor [Brain]\n";
    *this = src;
}

Brain &Brain::operator= (const Brain &src){
    std::cout << "Copy Assignment Operator [Brain]\n";
    if (this != &src){
        for ( int i = 0; i < 100; i++ )
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Destructor [Brain]\n";
}
