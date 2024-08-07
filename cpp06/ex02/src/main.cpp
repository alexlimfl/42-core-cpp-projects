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

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

int main(){
    
    Base *ptr = generate();
    std::cout << "Object address: " << ptr << "\n";
    identify(ptr);
    identify(*ptr);
    if (ptr)
        delete ptr;
    return 0;
}
