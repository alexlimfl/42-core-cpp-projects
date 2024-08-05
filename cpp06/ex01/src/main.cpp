/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:24:41 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:24:43 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/Data.hpp"

int main(){
    Data record = {"Alex", 180, 2.80};

    std::cout << record.studentName << "\n";
    std::cout << record.studentID << "\n";
    std::cout << record.studentGrade << "\n";

    std::cout << "Before serialization: " << &record << "\n";

    uintptr_t a = Serializer::serialize(&record);
    std::cout << "Serialized: " << a << "\n";

    Data *b = Serializer::deserialize(a);
    std::cout << "Deserialized: " << b << "\n";

    std::cout << b->studentName << "\n";
    std::cout << b->studentID << "\n";
    std::cout << b->studentGrade << "\n";

    return 0;
}
