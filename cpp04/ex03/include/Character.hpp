/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:43 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:44 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
    #define __CHARACTER_H__

#include "ICharacter.hpp"

class Character : public ICharacter{
    private:
        std::string _name;
        AMateria    *_inventory[4];
    public:
        Character(std::string name);
        ~Character();
		Character(const Character & src);
		Character & operator=(const Character & src);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        // used to avoid leaks when using unequip()
        AMateria	*ReturnMateria(int idx);
};

#endif