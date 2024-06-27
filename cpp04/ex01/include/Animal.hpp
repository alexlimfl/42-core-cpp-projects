/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:19:32 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:19:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
    #define __ANIMAL_H__

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator= (const Animal &src);
        virtual         ~Animal();
        virtual void    makeSound() const;
        std::string     getType() const;
        void            set_type(std::string new_type);
};
#endif
