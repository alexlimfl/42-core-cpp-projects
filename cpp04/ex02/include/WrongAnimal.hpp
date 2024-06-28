/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:19:32 by folim             #+#    #+#             */
/*   Updated: 2024/06/24 23:19:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
    #define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator= (const WrongAnimal &src);
        virtual     ~WrongAnimal();
        void        makeSound() const;
        std::string getType() const;
};
#endif
