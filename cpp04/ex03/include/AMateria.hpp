/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:12:07 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:12:09 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
    #define __AMTERIA_H__

#include <iostream>

 class AMateria
 {
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        AMateria &operator= (const AMateria &src);
        virtual ~AMateria() = 0;

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
 };

 #endif