/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:19:32 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:19:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
    #define __DOG_H__

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator= (const Dog &src);
        ~Dog();
        void    makeSound() const;
};
#endif
