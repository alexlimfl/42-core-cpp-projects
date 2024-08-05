/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:33 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:25:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base::~Base(){
    std::cout << "Destructor Base\n";
}

Base * generate(void){
    std::cout << "Generating...\n";
    srand(time(NULL));
    int nb = (rand() % 3);
    switch (nb)
    {
        case 0:
            return new A();
            break;

        case 1:
            return new B();
            break;

        case 2:
            return new C();
            break;
        
        default:
            break;
    }
    return NULL;
}

void identify(Base* p){
    std::cout << "Identifying...\n";
    if (dynamic_cast<A*>(p))
        std::cout << "  This is A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "  This is B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "  This is C\n";
}

void identify(Base& p) {
    std::cout << "Identifying... (without using pointer)\n";
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "  This is A" << std::endl;
        (void)a;
        return;
    } catch (std::exception& e){
        std::cout << "  " << e.what() << ", not A\n";
    }

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "  This is B" << std::endl;
        (void)b;
        return;
    } catch (std::exception& e){
        std::cout << "  " << e.what() << ", not B\n";
    }

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "  This is C" << std::endl;
        (void)c;
    } catch (std::exception& e){
        std::cout << "  " << e.what() << ", not C\n";
    }
}
