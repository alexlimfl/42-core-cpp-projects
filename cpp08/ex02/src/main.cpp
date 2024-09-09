/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:17:20 by folim             #+#    #+#             */
/*   Updated: 2024/09/08 16:17:22 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"


int main()
{
    {
        std::cout << "Test from Module:\n";
        MutantStack<int>    mstack;

        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);

        std::cout << mstack.top() << "\n";
        std::cout << mstack.size() << "\n";
        mstack.push(0);

        // MutantStack<int>::iterator it = mstack.begin();
        // MutantStack<int>::iterator ite = mstack.end();

        // ++it;
        // --it;

        // while (it != ite)
        // {
        //     std::cout << *it << std::endl;
        //     ++it;
        // }
        // std::stack<int> s(mstack);
    }
}
