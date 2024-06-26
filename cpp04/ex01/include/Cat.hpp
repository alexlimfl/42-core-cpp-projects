/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:19:32 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:19:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
    #define __CAT_H__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain   *_brain;
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator= (const Cat &src);
        ~Cat();
        void    makeSound() const;
};
#endif
