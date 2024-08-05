/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 00:18:40 by folim             #+#    #+#             */
/*   Updated: 2024/08/04 00:18:41 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
    #define __BASE_H__

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{
    public:
        virtual ~Base();
};

Base * generate(void);

//  It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p);

//  It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
//  inside this function is forbidden.
void identify(Base& p);




#endif
