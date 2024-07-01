/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:56 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:57 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
    #define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &src);
        Cure & operator= (const Cure &src);
        std::string const & getType() const; //Returns the materia type
        Cure* clone() const;
        void use(ICharacter& target);


};

#endif