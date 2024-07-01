/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:43 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:44 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
    #define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &src);
        Ice & operator= (const Ice &src);
        std::string const & getType() const; //Returns the materia type
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif