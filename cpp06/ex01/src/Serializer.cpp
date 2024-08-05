/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:33 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:25:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Constructor ScalarConvertor\n";
}

Serializer::Serializer(const Serializer &src){
    (void)src;
}

Serializer &Serializer::operator=(const Serializer &src){
    (void)src;
    return *this;
}   

Serializer::~Serializer(){
    std::cout << "Destructor Serializer\n";
}

//  It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t Serializer::serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

//  It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}