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
    std::cout << "Test from Module:\n";
    MutantStack<int>    mstack;

    mstack.push(1);
    mstack.push(2);

    std::cout << "Top: " << mstack.top() << "\n";

    mstack.pop();

    std::cout <<  "Size: " << mstack.size() << "\n";

    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    std::cout << "Top: " << mstack.top() << "\n";
    std::cout <<  "Size: " << mstack.size() << "\n";
    mstack.push(6);

    std::cout << "Test iterator\n";

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::cout << "Top: " << s.top() << "\n";
    std::cout <<  "Size: " << s.size() << "\n";

    return 0;
}
