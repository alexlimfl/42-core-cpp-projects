/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:13:00 by folim             #+#    #+#             */
/*   Updated: 2024/09/08 16:13:04 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
    #define __MUTANTSTACK_H__

#include <iostream>
#include <list>
#include <stack>
#include <deque>


template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack <T, Container> {
    public:
        MutantStack(){}

        MutantStack(const MutantStack &src) {
            *this = src;
        }
        MutantStack &operator=(const MutantStack &src) {
            if (this != &src)
                this = &src;
            return *this;
        }
        ~MutantStack() {}
        
        
        typedef typename Container::iterator iterator;

        iterator begin(){
            return this->c.begin();
        }

        iterator end(){
            return this->c.end();
        }
};

#endif
